class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums)mp[it]++;
        int cnt = 0;
        for(auto [_,it] : mp){
            if(it == 1){
                return -1;
            }
            cnt += ceil ((double)(it)/3);
        }
        return cnt;
    }
};