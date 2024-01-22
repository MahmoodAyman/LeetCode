class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0] = -1;
        int prefix = 0,ans = 0;
        for(int i = 0; i < nums.size() ; i++){
            prefix = prefix + (nums[i] == 1 ? 1 : -1);
            if(mp.count(prefix)){
                ans = max(ans , i - mp[prefix]);
            }
            else{
                mp[prefix] = i;
            }
        }
        return ans;
    }
};