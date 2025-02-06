class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

    vector<int> count;
    int n=s1.size();

    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        count.push_back(i);
    }
    if(count.size()>2)
    return false;
    if(count.size()==0)
    return true;
    if(count.size()==2)
    {
        int i=count[0];
        int j=count[1];

    if(s1[i]==s2[j] && s2[i]==s1[j])
    return true;

    }
    

    return false;
        
    }
};