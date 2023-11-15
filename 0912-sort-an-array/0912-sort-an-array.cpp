class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     vector<int>ans;
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
     for(int i = 0;i<mx*2+2;i++){
         while(freq[i]--){
            ans.emplace_back(i-mx);
         }
     }
        return ans;
    }
};