class Solution {
public:
vector<int> findRightInterval(vector<vector<int>>& intervals) {
    vector<vector<int>>starts;
    vector<int>ans(intervals.size(),-1);
    for(int i=0;i<intervals.size();i++){
        starts.push_back({intervals[i][0],i});
    }
    sort(starts.begin(),starts.end());
    for(int i=0;i<intervals.size();i++){
        vector<int>val{intervals[i][1],0};
        auto iterator= lower_bound(starts.begin(),starts.end(),val);
        if(iterator!=starts.end()){
            int idx=iterator-starts.begin();
            ans[i]=starts[idx][1];

        }
    }
    return ans;
}
};