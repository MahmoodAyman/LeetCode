class Solution {
public:
    bool possible(vector<int> &v, int mid, int m, int k) {
        int adj_flowers = 0, bouquets = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] <= mid) {
                adj_flowers++;
                if (adj_flowers >= k) {
                    adj_flowers = 0;
                    bouquets++;
                }
                if (bouquets == m)return true;
            }else adj_flowers=0;

        }
        return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k) {
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