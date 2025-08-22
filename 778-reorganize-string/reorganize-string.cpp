// class Solution {
// public:
//     string reorganizeString(string s) {

//         vector<int> freq(26,0);

//         for(auto ch:s)
//         {
//             freq[ch-'a']++;
//         }

//         //max heap store kr
//         priority_queue<pair<int,char>> pq;

//         for(int i=0;i<26;i++)
//         {
//             if(freq[i]>0)
//             {
//                 pq.push({freq[i],char(i+'a')});
//             }
//         } 

//         string ans="";

//         while(!pq.empty())
//         {
//             auto f=pq.top();
//             pq.pop();
//             pair<int,char> sec={0,'*'};
//             if(pq.size())
//             {
//                 sec=pq.top();
//                 pq.pop();
//             }
//             if(ans.size() && ans.back()==f.second)
//             return "";

//             ans+=f.second;
//             f.first--;

//             // if(pq.size())
//             // {
//                 ans+=sec.second;
//                 sec.first--;

//                 if(sec.first>0)
//                 pq.push(sec);
//             // }

//             if(f.first>0)
//             {
//                 pq.push(f);
//             }
            

//         }


//         return ans;
        
//     }
// };


class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);
        for (auto ch : s) freq[ch - 'a']++;

        int n = s.size();
        int maxFreq = *max_element(freq.begin(), freq.end());
        if (maxFreq > (n + 1) / 2) return ""; // Impossible case

        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], char(i + 'a')});
            }
        }

        string ans = "";
        while (!pq.empty()) {
            auto f = pq.top();
            pq.pop();

            pair<int, char> sec = {0, '*'};
            if (!pq.empty()) {
                sec = pq.top();
                pq.pop();
            }

            ans += f.second;
            f.first--;

            if (sec.first > 0) {
                ans += sec.second;
                sec.first--;
                if (sec.first > 0) pq.push(sec);
            }

            if (f.first > 0) pq.push(f);
        }

        return ans;
    }
};
