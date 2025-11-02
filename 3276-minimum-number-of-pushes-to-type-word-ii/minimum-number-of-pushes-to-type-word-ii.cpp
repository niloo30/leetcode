class Solution {
public:
    int minimumPushes(string word) {

        int n=word.size();

        vector<int> arr(26,0);
        for(auto ch:word)
        arr[ch-'a']++;

        // priority_queue<pair<int,char>> pq;

        // for(int i=0;i<26;i++)
        // {
        //     if(arr[i]>0)
        //     {
        //         pq.push({arr[i],(i+'a')});
        //     }
        // }
        // arr.clear();
        // vector<int> arr;
        // while(pq.size())
        // {
        //     arr.push_back(pq.top().first);
        //     pq.pop();
        // }

        sort(arr.rbegin(),arr.rend());


        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans+=(arr[i]*((i)/8+1));
        }

        return ans;
        
    }
};