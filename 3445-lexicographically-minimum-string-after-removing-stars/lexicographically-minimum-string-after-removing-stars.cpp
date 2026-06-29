class Solution {
public:
    string clearStars(string s) {

        map<char,vector<int>> mp;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*')
            {
                mp[s[i]].push_back(i);
            }
            else
            {
                // auto it=*(mp.begin());
                // mp[it.first].pop_back();

                // if(mp[it.first].size()==0)
                // mp.erase(it.first);
                auto it = mp.begin();
                it->second.pop_back();

                if (it->second.empty())
                    mp.erase(it);
            }
        }

        string ans="";

        //reverse each idx vector can we 
        for (auto &p:mp) {
            reverse(p.second.begin(),p.second.end());
        }


        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];

            if(mp.find(ch)!=mp.end()){ //character present

            int need=mp[ch].back();

                if(i==need){
                    ans+=ch;
                    mp[ch].pop_back();

                    if (mp[ch].empty())
                    mp.erase(ch);
                }

            }


        }




        return ans;

        
    }
};