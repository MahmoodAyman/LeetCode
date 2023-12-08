class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(),intervals.end());
        int prev = intervals[0][1];
        for(int i = 1; i < intervals.size(); ++i){
            if(intervals[i][0] < prev){
                ans++;
                prev = min(prev, intervals[i][1]);
            }
            else{
                prev = intervals[i][1];
            }
        }
        return ans;
    }
};