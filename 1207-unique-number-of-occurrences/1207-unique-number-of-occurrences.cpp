class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        unordered_set<int>st;
        for(auto &it:arr)mp[it]++;
        for(auto &it:mp)
            st.insert(it.second);
        if(st.size() == mp.size())return true;
        return false;
    }
};