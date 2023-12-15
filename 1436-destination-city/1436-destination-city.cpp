class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        for(auto &it:paths){
            mp[it[0]] = 1;
        }
        for(auto &it:paths){
            for(auto &i : it){
                if(!mp[i])return i;
            }
        }
        return "";
    }
};