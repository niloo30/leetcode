class Solution {
public:
    int nonSpecialCount(int l, int r) {


        vector<bool> arr(1e5,true);
        arr[0]=arr[1]=false; 
        
        for(int i=2;i*i<=arr.size();i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=arr.size();j+=i)
                arr[j]=false;
            }
        }

        int count=0;
        int left=sqrt(l);
        int right=sqrt(r);

        for(int i=left;i<=right;i++)
        if(arr[i] && i*i<=r && i*i>=l)
        count++;

        int ans=(r-l+1)-count;

        return ans;
        
    }
};