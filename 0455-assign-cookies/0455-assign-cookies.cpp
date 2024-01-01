class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0;
        while(i < g.size() and j < s.size()){
            if(s[j] >= g[i]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};