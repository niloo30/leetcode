class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
    vector<vector<int>> temp;
    for (int i = x; i<x+k;++i) {
        vector<int> row;
        for (int j=y;j<y+k; ++j) {
            row.push_back(grid[i][j]);
        }
        temp.push_back(row);
    }
    
    reverse(temp.begin(), temp.end());
    
    for (int i=x; i<x+k;++i) {
        for (int j=y; j <y+k;++j) {
            grid[i][j] = temp[i-x][j-y];
        }
    }
    
    return grid;
    }
};