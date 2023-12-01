class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s,t;
        for(auto &it:word1)s+=it;
        for(auto &it:word2)t+=it;
        return s == t;
    }
};