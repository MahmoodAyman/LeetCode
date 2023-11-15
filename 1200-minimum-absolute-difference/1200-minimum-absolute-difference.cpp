class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mn_abs_diff = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = n-1;i>0;i--){
            mn_abs_diff = min(mn_abs_diff,abs(arr[i]-arr[i-1]));
        }
        vector<vector<int>>ans;
        for(int i =0;i<n-1;i++){
            if(abs(arr[i] - arr[i+1]) == mn_abs_diff){
                ans.push_back({arr[i] , arr[i+1]});
            }
        }
        return ans;
    }
};