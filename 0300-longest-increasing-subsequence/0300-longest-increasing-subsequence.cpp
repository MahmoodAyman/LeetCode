class Solution {
public:
    int mem[2502];
    vector<int>v;
    int lis(int idx){
    if(idx>=v.size())return 0;
    int &ret = mem[idx];
    if(~ret)return ret;
    ret = 0;
    for(int i = idx+1;i<v.size();i++){
        if(v[idx]<v[i]){
            ret = max(ret , lis(i));
        }
    }
    ret +=1;
    return ret;
}
    int lengthOfLIS(vector<int>& nums) {
        memset(mem,-1,sizeof(mem));
        v=nums;
        int ret = 0;
        v.insert(v.begin(),INT_MIN);
        return lis(0)-1;
    }
};