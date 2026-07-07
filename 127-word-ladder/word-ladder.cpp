class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {


        set<string> st(wordList.begin(),wordList.end());

        queue<pair<string,int>> q;

        q.push({beginWord,1});

        

        while(!q.empty()) {

            string s=q.front().first;
            int dist=q.front().second;

            q.pop();

            if(s==endWord)
            return dist;

            for(int i=0;i<s.size();i++) {
                char orig=s[i];

                for(char ch='a';ch<='z';ch++) {
                    s[i]=ch;

                    if(st.find(s)!=st.end()){
                        q.push({s,dist+1});

                        st.erase(s);
                    }
                }
                s[i]=orig;
            }

        }
        return 0;
        
    }
};