class Solution {
public:
    unordered_map<char,string> mp;
    vector<string> ans;

    void f(string s,string temp,int i)
    {
        if(i>=s.size())
        {
            ans.push_back(temp);
            return;
        }
        char ch=s[i];
        string t=mp[ch];

        for(int idx=0;idx<t.size();idx++)
        f(s,temp+t[idx],i+1);

    }

    vector<string> letterCombinations(string digits) {

        if(digits=="")
        return {};

        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        f(digits,"",0);

        return ans;
        
    }
};