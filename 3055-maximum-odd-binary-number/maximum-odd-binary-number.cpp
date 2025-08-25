class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n=s.size();
        

        sort(s.begin(),s.end());
        char ch=s.back();
        s.pop_back();

        s=ch+s;
        reverse(s.begin(),s.end());

        // reverse(ans.begin(),ans.end());
        return s;
        
    }
};