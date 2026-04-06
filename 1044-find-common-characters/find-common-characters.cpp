class Solution {
public:
    void fun(string &word, vector<int>& count) {
        for(char &ch : word) {
            count[ch-'a']++;
        }
    }
    vector<string> commonChars(vector<string>& words) {

        int n = words.size();
        
        vector<int> count(26);
        vector<string> ans;
        
        fun(words[0], count);

        for(int i = 1; i<n; i++) {
            vector<int> temp(26,0);
            
            fun(words[i], temp);

            for(int i = 0; i<26; i++) {
                if(count[i] != temp[i])
                    count[i] = min(count[i], temp[i]);
            }
            
        }

        for(int i = 0; i<26; i++) {
            if(count[i] != 0) {
                int c = count[i];
                while(c--) {
                    ans.push_back(string(1, i+'a'));
                }
            }
        }
        
        return ans;
        
    }
};