class Solution {
public:
    vector<vector<int>>adj;
    vector<bool>vis;
    void dfs(int node){
        vis[node] = 1;
        for(auto &neighbour : adj[node]){
            if(!vis[neighbour])
                dfs(neighbour);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vis.resize(n);
        adj.resize(n);
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < rooms[i].size();j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        dfs(0);
        for(auto it:vis)if(!it)return false;
        return true;
    }
};