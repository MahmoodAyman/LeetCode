class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int quarter = (int)arr.size() / 4;
        int freq[100004] = {};
        for(auto &it:arr)freq[it]++;
        int ans = 0;
        for(int i = 0; i <= 1e5; ++i){
            if(freq[i] > quarter){
                ans = i; 
                break;
            }
        }
        return ans;
    }
};