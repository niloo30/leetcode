class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++)
        {
            int w=arr[i][0];
            int l=arr[i][1];
            if(mp.find(w)==mp.end())
            {
                mp[w]=0;
            }
            mp[l]++;
        }
        vector<int> W;
        vector<int> L1;

        for(auto ele:mp)
        {
            if(ele.second==1)
            L1.push_back(ele.first);

            if(ele.second==0)
            W.push_back(ele.first);
        }
        sort(W.begin(),W.end());
        sort(L1.begin(),L1.end());
        return {W,L1};
    }
};