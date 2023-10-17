class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        map<int,bool>mp1,mp2;
        for(auto &it:nums1)mp1[it] = true;
        for(auto &it:nums2)mp2[it] = true;
        for(auto &it:mp1){
            if(!mp2[it.first])
                ans[0].emplace_back(it.first);
        }
        for(auto &it:mp2){
            if(!mp1[it.first])
                ans[1].emplace_back(it.first);
        }
        return ans;
    }
};