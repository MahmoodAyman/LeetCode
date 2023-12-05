class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        vector<int>ans;
        for(int i = 0; i < k; i++){
            mp[nums[i]]++;
        }
        ans.push_back(mp.rbegin()->first);
        for(int i = k; i < n; i++){
            if(mp[nums[i- k]] <= 1){
                mp.erase(nums[i-k]);
            }
            else mp[nums[i - k]]--;
            mp[nums[i]]++;
            ans.push_back(mp.rbegin()->first);
        }
        return ans;
    }
};