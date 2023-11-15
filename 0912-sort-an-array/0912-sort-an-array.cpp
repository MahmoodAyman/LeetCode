class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int mx = -100000;
     for(auto &it:nums){
         if(it<0){
             mx = max(mx,it*-1);
         }
         else mx= max(mx,it);
     }
     vector<int>freq(mx*2+2);
     for(auto &it:nums){
         freq[it + mx]++;
     }
        int idx =0;
     for(int i = 0;i<mx*2+2;i++){
         while(freq[i]--){
            nums[idx++] = i - mx;
         }
     }
        return nums;
    }
};