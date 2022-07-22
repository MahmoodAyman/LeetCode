class Solution {
public:
  vector<int> findRightInterval(vector<vector<int>>& intervals) {
    vector<vector<int>>starts;
    for(int i=0;i<intervals.size();i++){
        starts.push_back({intervals[i][0],i});
    }
    sort(starts.begin(),starts.end());
    vector<int>ans((int)intervals.size(),-1);
    for(int i=0;i<intervals.size();i++){
        int left=0,right=(int)starts.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(starts[mid][0]>=intervals[i][1]){
                ans[i]=starts[mid][1];
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
    }
    return ans;
}
};
