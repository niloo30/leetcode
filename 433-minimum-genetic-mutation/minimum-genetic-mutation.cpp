class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {

        set<string> st(bank.begin(),bank.end());

        queue<pair<string,int>> q;

        q.push({startGene,0});

        string t="ACGT";

        while(!q.empty()) {

            string s=q.front().first;
            int dist=q.front().second;

            q.pop();

            if(s==endGene)
            return dist;

            for(int i=0;i<s.size();i++) {
                char orig=s[i];

                for(int j=0;j<4;j++) {
                    s[i]=t[j];

                    if(st.find(s)!=st.end()){
                        q.push({s,dist+1});

                        st.erase(s);
                    }
                }
                s[i]=orig;
            }

        }
        return -1;
        
    }
};