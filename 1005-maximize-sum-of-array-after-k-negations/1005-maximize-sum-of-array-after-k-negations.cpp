class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n and k;++i){
            if(nums[i] < 0)nums[i] *= -1,k--;
        }
        sort(nums.begin(),nums.end());
        if(k & 1)
            nums[0] *= -1;
            
        return accumulate(nums.begin(),nums.end(),0);
    }
};