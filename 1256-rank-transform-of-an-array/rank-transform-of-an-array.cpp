class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        unordered_map<int,int> mp;
        set<int> st;
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        st.insert(temp[i]);

        int rank=1;

        for(auto x:st)
        {
            mp[x]=rank;
            rank++;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[arr[i]];

        }
        return arr;


        
    }
};