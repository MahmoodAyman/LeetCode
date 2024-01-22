class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(n+1),ans(2);
        for(auto &it:nums)freq[it]++;
        for(int i = 1; i <= n; i++){
            if(freq[i] == 2)ans[0] = i;
            if(!freq[i])ans[1] = i;
        }
        return ans;
    }
};