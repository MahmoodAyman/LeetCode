class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0 , r = 0 , mx = 0;
        bool flag = 0;
        while(l < nums.size()){
            while(r < nums.size() and (!flag or nums[r])){
                if(!nums[r])flag = 1;
                r++;
            }
            mx = max(mx, r - l);
            if(!nums[l]){
                flag = 0;
            }
            l++;
        }
        return mx - 1;
    }
};