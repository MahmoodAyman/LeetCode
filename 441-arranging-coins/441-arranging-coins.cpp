class Solution {
public:
    bool valid(long long mid,int n){
        return ((mid*(mid+1))/2)>n;
    }
    int arrangeCoins(int n) {
       long long left=1,right=1e9,rows=0;
        while(left<=right){
            long long mid=left+(right-left)/2;
            if(valid(mid,n)){
                rows=mid-1;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return rows;
    }
};