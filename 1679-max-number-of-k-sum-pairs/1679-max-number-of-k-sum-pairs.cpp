class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto&it:nums)mp[it]++;
        int ans = 0;
        for(auto &it:mp){
            if(mp[(k-it.first)]){
                if(k-it.first == it.first and it.second>1){
                    ans += it.second/2;
                    it.second = 0;
                }
                else if(k-it.first == it.first and it.second ==1) {
                    continue;
                }
                if(mp[(k-it.first)] > it.second){
                    ans += it.second;
                    mp[(k-it.first)] -= it.second;
                    it.second = 0;
                }
                else{
                    ans += mp[(k-it.first)];
                    it.second -= mp[(k-it.first)];
                    mp[(k-it.first)] = 0;
                }
            }
        }
        return ans;
    }
};