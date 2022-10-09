void DFS(int node, unordered_map<int, vector<int>> &adj, unordered_set<int> &st)
{
    vector<int> nums;
    int cnt = 1;
    st.insert(node);
    for (auto it : adj[node])
    {
        if (!st.count(it))
        {
            nums.push_back(it);
            DFS(it, adj, st);
        }
    }
}
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        unordered_set<int> vis;
        unordered_map<int, vector<int>> adj(n);
        sort(nums.begin(),nums.end());
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] == 1)
            {
                adj[nums[i - 1]].push_back(nums[i]);
                adj[nums[i]].push_back(nums[i - 1]);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis.count(nums[i]))
            {
                int bef=vis.size();
                DFS(nums[i], adj, vis);
                int af=vis.size();
                ans = max(ans, af-bef);
            }
        }
        return ans;
    }
};