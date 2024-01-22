class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int prefix = 0 ,ans = 0;
        for(int i = 0 ; i < nums.size(); i++){
            prefix+=nums[i];
            if(mp[prefix - k]){
                ans+=mp[prefix - k];
            }
            mp[prefix]++;
        }
        return ans;
    }
};