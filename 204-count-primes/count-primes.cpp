class Solution {
public:
    int countPrimes(int n) {


        vector<bool> arr(n+1,true);
        
        //true->prime h
        //false->non prime h
        
        arr[0]=arr[1]=false;//initialisation 
        
        for(int i=2;i*i<=n;i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=n;j+=i)
                arr[j]=false;
            }
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        if(arr[i])
        ans.push_back(i);
        
        
        return ans.size();
        
    }
};