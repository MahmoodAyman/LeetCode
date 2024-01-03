class Solution {
public:
    vector<bool>vis;
    void dfs(vector<vector<int>>&isConnected, int node){
        vis[node] = 1;
        for(int i = 0; i < isConnected[node].size(); i++){
                if(isConnected[node][i] and !vis[i])
                    dfs(isConnected,i);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vis.resize(isConnected.size());
        int cnt = 0;
        for(int i = 0; i<isConnected.size();i++){
            if(!vis[i]){
                cnt++;
                dfs(isConnected,i);
            }
        }
        return cnt;
    }
};