class Solution {
public:
    bool isValid(int sr, int sc, vector<vector<int>> &matrix) {
        if (sr < 0 || sr >= matrix.size())return false;
        if (sc < 0 || sc >= matrix[0].size())return false;
        return true;
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
        vector<vector<int>> visited(image.size(), vector<int>(image[0].size()));
        DFS(sr, sc, image, visited, image[sr][sc], color);
        return image;
    }

    void DFS(int sr, int sc, vector<vector<int>> &image, vector<vector<int>> &visited, int node, int clr) {
        if (!isValid(sr, sc, image) || visited[sr][sc] || image[sr][sc] != node)return;
        visited[sr][sc] = 1, image[sr][sc] = clr;
        DFS(sr + 1, sc, image, visited, node, clr);
        DFS(sr, sc + 1, image, visited, node, clr);
        DFS(sr - 1, sc, image, visited, node, clr);
        DFS(sr, sc - 1, image, visited, node, clr);
    }
};
