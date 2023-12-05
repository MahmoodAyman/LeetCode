class Solution {
public:
int lengthOfLongestSubstring(string s) {
    int mx = 0;
    unordered_map<char,int>mp;
    for(int st = 0 , ed = 0 ; ed < s.size(); ++ed){
        if(mp.count(s[ed])){
            int next = mp[s[ed]] + 1;
            for(;st < next; ++st){
                mp.erase(s[ed]);
            }
        }
        mx = max(mx, ed - st + 1);
        mp[s[ed]] = ed;
    }
    return mx;
}
};