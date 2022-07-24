class Solution {
public:
vector<int> findRightInterval(vector<vector<int>>& intervals) {
   map<int,int>mp;
    vector<int>ans(intervals.size(),-1);
    for(int i=0;i<intervals.size();i++){
        mp[intervals[i][0]]=i;
    }
    for(int i=0;i<intervals.size();i++){
        auto iterator= mp.lower_bound(intervals[i][1]);
        if(iterator!=mp.end()){
            ans[i]=iterator->second;
        }
    }
    return ans;
}
};