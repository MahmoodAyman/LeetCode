class Solution {
public:
    int n;
    int dp[105];
    int pick_or_leave(vector<int>&nums,int idx){
        if(idx >= n)return 0;
        int &ret = dp[idx];
        if(~ret)return ret;
        int take_it = nums[idx] + pick_or_leave(nums, idx+2);
        int leave_it = pick_or_leave(nums , idx+1); 
        return ret = max(take_it, leave_it);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        n = nums.size();
        return pick_or_leave(nums,0);
        
    }
};