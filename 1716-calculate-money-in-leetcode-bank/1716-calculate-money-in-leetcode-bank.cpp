class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int ans = weeks * 28 + ((weeks * (weeks - 1)) / 2) * 7;
        int remDays = n % 7;
        ans += (remDays * (remDays + 1)) / 2 + (weeks * remDays);
        return ans;
    }
};