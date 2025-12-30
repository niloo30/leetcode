class Solution {
public:
    int ans = 0;
    
    bool check(vector<vector<int>>& grid, int start_r, int start_c) {
        unordered_set<int> unique;
        
        for(int i = start_r; i < start_r + 3; i++) {
            for(int j = start_c; j < start_c + 3; j++) {
                if(grid[i][j] < 1 || grid[i][j] > 9) {
                    return false;
                }
                unique.insert(grid[i][j]);
            }
        }
        if(unique.size() != 9) return false;
        
        
        int row1 = grid[start_r][start_c] + grid[start_r][start_c+1] + grid[start_r][start_c+2];
        int row2 = grid[start_r+1][start_c] + grid[start_r+1][start_c+1] + grid[start_r+1][start_c+2];
        int row3 = grid[start_r+2][start_c] + grid[start_r+2][start_c+1] + grid[start_r+2][start_c+2];
        
        int col1 = grid[start_r][start_c] + grid[start_r+1][start_c] + grid[start_r+2][start_c];
        int col2 = grid[start_r][start_c+1] + grid[start_r+1][start_c+1] + grid[start_r+2][start_c+1];
        int col3 = grid[start_r][start_c+2] + grid[start_r+1][start_c+2] + grid[start_r+2][start_c+2];
        
        int diag1 = grid[start_r][start_c] + grid[start_r+1][start_c+1] + grid[start_r+2][start_c+2];
        int diag2 = grid[start_r][start_c+2] + grid[start_r+1][start_c+1] + grid[start_r+2][start_c];
        
        
        unordered_set<int> sums;
        sums.insert(row1);
        sums.insert(row2);
        sums.insert(row3);
        sums.insert(col1);
        sums.insert(col2);
        sums.insert(col3);
        sums.insert(diag1);
        sums.insert(diag2);
        
        return sums.size() == 1;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        if(m < 3 || n < 3) return 0;
        
        for(int r = 0; r <= m - 3; r++) {
            for(int c = 0; c <= n - 3; c++) {
                if(check(grid, r, c)) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};