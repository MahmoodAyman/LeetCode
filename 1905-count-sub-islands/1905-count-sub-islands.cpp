class Solution {
    int dr[4]{-1, 0, 1, 0};
    int dc[4]{0, 1, 0, -1};
    bool is_sub_island;
public:

    void dfs(int r, int c, vector<vector<int>> &grid1, vector<vector<int>> &grid2) {
        int n = grid1.size(), m = grid1[0].size();
        if (r < 0 || r >= n)return;
        if (c < 0 || c >= m)return;
        if (grid2[r][c] == 0)
            return;

        if (grid2[r][c] && !grid1[r][c]) {
            is_sub_island = false;
            return;
        }
        grid2[r][c] = 0;

        for (int d = 0; d < 4; ++d)
            dfs(r + dr[d], c + dc[d], grid1, grid2);
    }

    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2) {
        int count = 0;
        for (int r = 0; r < (int) grid2.size(); ++r) {
            for (int c = 0; c < (int) grid2[0].size(); ++c) {
                if (grid2[r][c]) {
                    is_sub_island = true;
                    dfs(r, c, grid1, grid2);
                    count += is_sub_island;
                }
            }
        }
        return count;
    }
};