class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int cnt = 1;
        sort(points.begin(),points.end());
        int prev = points[0][1];
        for(int i = 1; i < points.size(); ++i){
            int l =points[i][0], r = points[i][1];
            if(l <= prev){
                prev = min(prev, r);
            }
            else {
                cnt++;
                prev = r;
            }
        }
        return cnt;
    }
};