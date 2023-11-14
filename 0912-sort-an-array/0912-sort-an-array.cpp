class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(auto &it:nums)
            mp[it]++;
        for(auto &it:mp){
            while(it.second--){
                ans.emplace_back(it.first);
            }
        }
        return ans;
    }
};