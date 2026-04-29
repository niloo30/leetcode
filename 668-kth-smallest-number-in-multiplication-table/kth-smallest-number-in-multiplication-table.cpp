class Solution {
public:
    bool check(int mid,int k,int m,int n){
        int count=0;

        for(int i=1;i<=m;i++)
        {
            count+=min(n,mid/i);
        }
        return count>=k;
    }
    int findKthNumber(int m, int n, int k) {

        int l=1;
        int h=m*n;
        int ans=-1;


        while(l<=h)
        {
            int mid=(l+h)/2;

            if(check(mid,k,m,n))
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
        
    }
};