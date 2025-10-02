class Solution {
public:
    bool equalFrequency(string word) {

        map<char,int> mp;
        for(char ch:word)
        mp[ch]++;

        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            mp[ch]--;
            if(mp[ch]==0)
            mp.erase(ch);

            set<int> st;
            for(auto ele:mp)
            {
                st.insert(ele.second);
                
            }
            if(st.size()==1)
            return true;

            mp[ch]++;
        }
        return false;
        
    }
};