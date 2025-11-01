class Solution {
public:
    int minimumPushes(string word) {

        int n=word.size();

        vector<int> arr(26,0);
        for(auto ch:word)
        arr[ch-'a']++;

        priority_queue<pair<int,char>> pq;

        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            {
                pq.push({arr[i],(i+'a')});
            }
        }
        string t="";
        while(pq.size()>0)
        {
            int f=pq.top().first;
            char ch=pq.top().second;

            pq.pop();
            while(f--)
            {
                t+=ch;
            }
        }

        unordered_map<char,int> mp;

        for(int i=0;i<n;i++)
        {
            char ch=t[i];
            if(mp.find(ch)==mp.end())
            {
                if(mp.size()<8)
                {
                    mp[ch]=1;
                }
                else if(mp.size()<16)
                {
                    mp[ch]=2;
                }
                else
                if(mp.size()<24)
                {
                    mp[ch]=3;
                }
                else
                mp[ch]=4;
            }
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=mp[word[i]];
        }

        return ans;
        
    }
};