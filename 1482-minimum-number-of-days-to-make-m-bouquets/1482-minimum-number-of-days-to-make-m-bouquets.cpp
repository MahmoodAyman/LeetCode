class Solution {
public:
    void Fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
    bool possible(vector<int> &v, int mid, int m, int k) {
        int adj_flowers = 0, bouquets = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] <= mid) {
                adj_flowers++;
                if (adj_flowers >= k) {
                    adj_flowers = 0;
                    bouquets++;// start new bouquets
                }
                if (bouquets == m)return true;
            }else adj_flowers=0;// start new adj if current element < k 

        }
        return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k) {
        Fast();
        if (m * k > bloomDay.size())return -1;
        int ans = -1, left = 1, right = *max_element(bloomDay.begin(), bloomDay.end());
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};