class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int mx = 0 , zeros = 0, st = 0 , ed = 0;
    for(; ed < nums.size() ; ++ed){
        if(nums[ed] == 0){
            zeros++;
            while(zeros > k){
                zeros-=nums[st] == 0;
                st++;
            }
        }
        mx = max (mx , ed - st + 1);
    }
    return mx;
    }
};