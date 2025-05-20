class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {


        int n=s.size();

        vector<int> arr(n,0);

        for(int i=0;i<shifts.size();i++)
        {
            int x=1;

            if(shifts[i][2]==0)
            x=-1;

            int l=shifts[i][0];
            int r=shifts[i][1];

            arr[l]+=x;
            if(r+1<n)
            arr[r+1]-=x;    
           
        }

        for(int i=1;i<n;i++)
        arr[i]=arr[i]+arr[i-1];

        for(int i=0;i<n;i++)
        {
            int deviation=arr[i]%26;

            if(deviation<0)
            deviation+=26;

            s[i]= ((s[i]-'a')+deviation)%26+'a';
        }

        return s;
        
    }
};