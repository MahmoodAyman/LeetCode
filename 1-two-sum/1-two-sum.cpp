class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int l=0,r=nums.size()-1;
        while(l<r){
            if(v[l].first+v[r].first==target){
                ans.push_back(v[l].second);
                ans.push_back(v[r].second);
                break;
            }
            else if(v[l].first+v[r].first>target){
                r--;
            }
            else l++;
        }
        return ans;
    }
};