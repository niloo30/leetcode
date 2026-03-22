class Solution {
public:

    vector<vector<int>> rotate(vector<vector<int>>& matrix) {

        int n=matrix.size();
        //transopse 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>j)
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse each row now
        int k=0;
        while(k<n)
        {
            int i=0;
            int j=n-1;

            while(i<j)
            {
                swap(matrix[k][i++],matrix[k][j--]);
            }
            k++;

        }
        return matrix;
        
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        for(int i=0;i<4;i++)
        {
            mat=rotate(mat);
            if(mat==target)
            return true;
        }
        return false;
        
    }
};