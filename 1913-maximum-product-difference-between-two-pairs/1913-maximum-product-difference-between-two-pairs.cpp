class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p1 = nums[nums.size() - 1] * nums[nums.size() - 2];
        int p2 = nums[0] * nums[1];
        return p1 - p2;
    }
};