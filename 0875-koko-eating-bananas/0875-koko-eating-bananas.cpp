class Solution {
public:
    bool is_it_ok(vector<int>& piles, int h, int mid){
        long long hours = 0;
        for(int pile : piles){
            if(pile <= mid){
                hours++;
            }
            else {
                hours += pile / mid;
                if(pile % mid)hours++;
            }
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left = 1 , right = 1e9, ans = -1;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            if(is_it_ok(piles,h,mid)){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};