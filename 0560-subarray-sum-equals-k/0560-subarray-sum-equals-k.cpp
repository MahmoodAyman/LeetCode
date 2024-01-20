class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        for(int start = 0; start < nums.size() ; start++){
            int sum = nums[start];
            for(int end = start + 1; end  < nums.size() ; end++){
                if(sum == k) ans++;
                sum += nums[end];
            }
            if(sum == k)ans++;
        }
        return ans;
    }
};