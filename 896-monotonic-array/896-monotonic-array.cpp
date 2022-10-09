class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
         bool monIncrease = 1, monDecrease = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            monIncrease = 0;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            monDecrease = 0;
            break;
        }
    }
    if (monDecrease || monIncrease)
        return 1;
   return 0;
    }
};