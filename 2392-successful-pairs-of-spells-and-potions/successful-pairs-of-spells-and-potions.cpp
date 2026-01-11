class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {


        vector<int> ans;
        sort(potions.begin(),potions.end());
        int n=potions.size();

        for(int i=0;i<spells.size();i++)
        {
            long long val=(success+(spells[i]-1))/(long long )spells[i];

            auto it=lower_bound(potions.begin(),potions.end(),val)-potions.begin();
            // while(it>0 and potions[it]==potions[it-1])
            // it--;
            int temp=n-it;
            ans.push_back(temp);



        }

        return ans;
        
    }
};