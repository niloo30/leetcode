class Solution {
public:
    vector<int> placed;
    int ans=0;
    int N;

    void rec(int row){
        if(row==N)
        {
            ans++;
            return ;
        }

        for(int col=0;col<N;col++)
        {
            bool safe=1;

            for(int pRow=0;pRow<row;pRow++)
            {
                int pCol=placed[pRow];
                if(pCol==col || (abs(row-pRow)==abs(col-pCol)))
                {
                    safe=0;
                }
            }
                if(safe)
                {
                    placed.push_back(col);
                    rec(row+1);
                    placed.pop_back();
                }
            
        }
    }
    int totalNQueens(int n) {

        N=n;
        rec(0);

        return ans;
        
    }
};