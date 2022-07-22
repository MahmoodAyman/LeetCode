class Solution {
public:
  int firstPosition(vector<int>&v,int target){
    int left=0,right=(int)v.size()-1;
    int start_point=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==target){
            start_point=mid;
            right=mid-1;
        }
        else if(v[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return start_point;
}
int lastPosition(vector<int>&v,int target){
    int left=0,right=(int)v.size()-1;
    int end_point=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==target){
            end_point=mid;
            left=mid+1;
        }
        else if(v[mid]<target){
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    return end_point;
}
vector<int>searchRange(vector<int>&nums,int target){
    vector<int>ans;
    ans.emplace_back(firstPosition(nums,target));
    ans.emplace_back(lastPosition(nums,target));
    return ans;
}
};