class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int coins = 1;
        int weeks = n / 7;
        while(weeks--){
            for(int i = 0; i< 7; ++i){
                ans+=(coins + i);
            }
            coins++;
        }
        int rem = n % 7;
        while(rem--){
            ans+=coins;
            coins++;
        }
        return ans;
    }
};