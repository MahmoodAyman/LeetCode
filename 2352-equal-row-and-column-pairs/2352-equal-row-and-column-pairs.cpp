class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> v1;
        map<vector<int>, int> rows;
        map<vector<int>, int> cols;
        for (int i = 0; i < n; i++)
        {
            // rows.insert(pair<vector<int>, int>(grid[i], 1));
            rows[grid[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v1.emplace_back(grid[j][i]);
            }
            // cols.insert(pair < vector<int> ,int>(v1 ,1));
            cols[v1]++;
            v1.clear();
        }
        int ans = 0;
        for (auto &r : rows)
        {
            for (auto &c : cols)
            {
                if (r.first == c.first and r.second and c.second)
                {
                    ans +=(r.second * c.second);
                    r.second = 0;
                    c.second = 0;
                }
            }
        }
        return ans;
    }
};