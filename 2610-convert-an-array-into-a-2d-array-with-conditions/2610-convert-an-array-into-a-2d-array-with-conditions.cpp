class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        pair<int,int> mx = {0,0};
        unordered_map<int,int>mp;
        for(auto &it:nums)mp[it]++;
        for(auto &it:mp){
            if(it.second > mx.second){
                mx.first = it.first;
                mx.second = it.second;
            }
        }
        vector<vector<int>>ans;
        while(mp[mx.first]){
            vector<int>v;
            for(auto &it:mp){
                if(it.second){
                    v.push_back(it.first);
                    it.second--;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};