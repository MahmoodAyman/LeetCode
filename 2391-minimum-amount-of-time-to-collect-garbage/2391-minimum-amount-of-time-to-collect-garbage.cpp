class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        for(int i = 1 ; i<(int) travel.size() ; i++)
            travel[i] += travel[i-1];
        string s = "MPG";
        int ans = 0;
        for(auto &g : s){
            int collect = 0;
            for(int i = 0; i < garbage.size(); i++){
                bool flag = 0;
                for(auto &it : garbage[i]){
                    if(it == g){
                        collect = i;
                        ans++;
                    }
                }
            }
            if(collect)
                ans+=travel[collect - 1];
        }
        return ans;
    }
};