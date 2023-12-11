class Solution {
public:
    int count_1s(int x){
        int cnt = 0;
        while(x){
            if(x%2)cnt++;
            x = x >> 1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i = 0 ; i <= n; i++){
            ans[i] = count_1s(i);
        }
        return ans;
    }
};