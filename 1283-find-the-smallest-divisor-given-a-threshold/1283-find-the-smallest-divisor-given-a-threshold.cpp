class Solution {
public:
        bool possible(vector<int>&nums,int mid, int threshold) {
        long long res = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            double a = ceil(double(double(nums[i]) / double(mid)));
            res += a;
        }
        return res <= threshold;
    };
    int smallestDivisor(vector<int> &nums, int threshold) {
        int left=1,right=1e7,ans=1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(nums,mid,threshold)){
                right=mid-1;
                ans=mid;
            }
            else {
                left=mid+1;
            }
        }
        return ans;
    }
};