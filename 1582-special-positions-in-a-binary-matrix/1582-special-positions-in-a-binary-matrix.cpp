class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size();
        int cnt = 0;
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0; j < n; ++j){
                if(mat[i][j]){
                    bool only = 1;
                    for(int row = 0; row < m; ++row){
                        if(mat[row][j] and row != i){
                            only = 0;
                            break;
                        }    
                    }
                    for(int col = 0 ; col < n; ++col){
                        if(mat[i][col] and col != j){
                            only = 0; 
                            break;
                        }
                    }
                    if(only)cnt++;
                }
            }
        }
        return cnt;
    }
};