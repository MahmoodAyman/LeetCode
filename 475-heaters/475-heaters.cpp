class Solution {
public:
    bool valid(vector<int> &v, vector<int> heaters, int mid) {
        int cnt = 0;
        int j=0;
        for (int i = 0; i < heaters.size(); i++) {
            while(j<v.size() and v[j]>=heaters[i]-mid and v[j]<= heaters[i]+mid){
                j++;
            }
        }
        return j == v.size();
    }

    int findRadius(vector<int> &houses, vector<int> &heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        long long left = 0, right = 1e9, ans = -1;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (valid(houses, heaters, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};