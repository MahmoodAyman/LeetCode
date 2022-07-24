class Solution {
public:
int triangleNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int counter = 0;
    for (int i = 0; i < (int) nums.size(); i++) {
             int k = i + 2;
        for (int j = i + 1; j < (int) nums.size()&&nums[i]!=0; j++) {
            int valid_pos = nums.size();
            auto iterator = lower_bound(nums.begin() + k, nums.end(), nums[i] + nums[j]);
            if (iterator != nums.end()) {
                valid_pos = iterator - nums.begin();

            }
            counter+=valid_pos-j-1;
        }
    }
    return counter;
}
};