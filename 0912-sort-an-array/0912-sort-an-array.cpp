class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    int mx = -100000,mn = 100000;
     for(auto &it:nums){
         mn = min(it,mn);
         mx = max(it,mx);
     }
    int sz = mx - mn;
     vector<int>freq(sz+1);
     for(auto &it:nums){
         freq[it - mn]++;
     }
        int idx =0;
     for(int i = 0;i<sz+1;i++){
         while(freq[i]--){
            nums[idx++] = i + mn;
         }
     }
        return nums;
    }
};