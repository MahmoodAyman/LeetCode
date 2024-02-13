class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums)mp[it]++;
        for(auto [_,f] : mp)if(f == 1)return _;
        return 0;
    }
};