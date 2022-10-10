
struct edge
{
    int to;
    bool built;
};
void DFS(vector<vector<edge>> &adj, vector<bool> &vis, int node, int &reorder_edges)
{
    vis[node] = 1;
    for (auto &it : adj[node])
    {
        if (!vis[it.to])
        {
            reorder_edges += it.built;
            DFS(adj, vis, it.to, reorder_edges);
        }
    }
}
class Solution
{
public:
    int minReorder(int n, vector<vector<int>> &connections)
    {
        vector<vector<edge>> adj(n);
        vector<bool> vis(n);
        for (auto &it : connections)
        {
            adj[it[0]].push_back({it[1], 1});
            adj[it[1]].push_back({it[0], 0});
        }
        int reorderd = 0;
        DFS(adj, vis, 0, reorderd);
        return reorderd;
    }
};