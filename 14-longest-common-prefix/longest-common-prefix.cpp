class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        int n=s.size();

        sort(s.begin(),s.end());

        string f=s[0];
        string l=s[n-1];

        int i=0;int j=0;

        while(i<f.size() && j<l.size())
        {
            if(f[i]==l[j])
            {
                i++;
                j++;
            }
            else
            break;
        }

        string ans=f.substr(0,i);
        return ans;


        
    }
};