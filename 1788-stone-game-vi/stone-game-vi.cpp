class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b)
    {
        return a.first+a.second < b.first+b.second;
    }
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {

        int n=aliceValues.size();

        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({aliceValues[i],bobValues[i]});
        }

        sort(arr.begin(),arr.end(),cmp);
        int aliceScore=0;
        int bobScore=0;
        bool aliceTurn=true;
        for(int i=n-1;i>=0;i--)
        {
            if(aliceTurn)
            {
                aliceScore+=arr[i].first;

            }
            else
            {
                bobScore+=arr[i].second;
            }
            aliceTurn=(!aliceTurn);
        }

        if(aliceScore>bobScore)
        return 1;
        else
        if(aliceScore<bobScore)
        return -1;

        return 0;
    }
};