class Solution {
public:
    int maxPoints(vector<vector<int>>& arr) {

        int ans=0;
        int n=arr.size();
        if(n<=2)
        return n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n ;j++)
            {
                int count=2;
                int dx=arr[j][0]-arr[i][0];
                int dy=arr[j][1]-arr[i][1];
                for(int k=0;k<n;k++)
                {
                    if(i!=j and j!=k and i!=k)
                    {
                        int dx1=arr[k][0]-arr[j][0];
                        int dy1=arr[k][1]-arr[j][1];

                        if(dy*dx1 == dx*dy1)
                        count++;
                    }
                }
                ans=max(ans,count);
            }
        }


        return ans;
        
    }
};