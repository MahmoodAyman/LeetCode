class Solution {
public:
    int dr[4]{-1, 0, 1, 0};
    int dc[4]{0, 1, 0, -1};

    bool isValid(int r, int c, vector<vector<int>> grid) {
        if (r < 0 || r >= grid.size())return 0;
        if (c < 0 || c >= grid[0].size())return 0;
        return true;
    }


    void DFS(vector<vector<int>> &grid, vector<vector<bool>> &vis, int sr, int sc, int old_color) {
        if (!isValid(sr, sc, grid) || vis[sr][sc] || grid[sr][sc] != old_color)return;
        vis[sr][sc] = 1;
        for (int d = 0; d < 4; d++)
            DFS(grid, vis, sr + dr[d], sc + dc[d], old_color);
    }

    void isBound(vector<vector<int>> &grid, vector<vector<bool>> &vis, int new_color) {
        int rows = grid.size(), cols = grid[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!vis[i][j])continue;
                for (int d = 0; d < 4; d++) {
                    if (!isValid(i + dr[d], j + dc[d], grid) || !vis[i + dr[d]][j + dc[d]]) {
                        // !isvalid means it's a bound or array
                        grid[i][j] = new_color;
                    }
                }
            }
        }
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int oldColor=grid[row][col];
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size()));
        DFS(grid,vis,row,col,oldColor);
        isBound(grid,vis,color);
        return grid;
    }
};