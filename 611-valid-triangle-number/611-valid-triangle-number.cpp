class Solution {
public:
    int BS(vector<int> &v, int start, int val) {
        int left = start;
        int right = (int) v.size() - 1;
        int pos = v.size();
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] < val) {
                left = mid + 1; 
            } else {
                right = mid - 1;
                pos = mid;
            }
        }
        return pos;
    }

    int triangleNumber(vector<int> &nums) {
        int counter = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int k = j + 1;// my start value
                int first_idx_equal = BS(nums, k, nums[i] + nums[j]);
                counter += first_idx_equal - j - 1;
            }
        }

        return counter;
    }
};