class Solution {
public:
    vector<string> arr;
    void solve(int n,string ans)
    {
        if(n==0)
        {
            arr.push_back(ans);
            return ;
        }

        if(ans.size()<1)
        {
            solve(n-1,ans+"a");
            solve(n-1,ans+"b");
            solve(n-1,ans+"c");

            return ;
        }
        else
        {
            if(ans.back()=='a')
            {
               solve(n-1,ans+"b");
               solve(n-1,ans+"c"); 
            }
            else if(ans.back()=='b')
            {
                solve(n-1,ans+"a");
                solve(n-1,ans+"c");
            }
            else
            {
                solve(n-1,ans+"b");
                solve(n-1,ans+"a");
            }
            return ;
        }

    }
    string getHappyString(int n, int k) {

        solve(n,"");

        if(k>arr.size())
        return "";

        sort(arr.begin(),arr.end());

        return arr[k-1];
        
    }
};