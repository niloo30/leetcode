class Solution {
public:
    #define ll long long
    long long dividePlayers(vector<int>& skill) {
        
        // proving the idea is more imp than solving the problem 

        //why sort array ask first?

        sort(skill.begin(),skill.end());
        ll ans=0;
        int n=skill.size();
        int i=0,j=skill.size()-1;

        int equal=skill[0]+skill[n-1];
        while(i<j)
        {
            if(skill[i]+skill[j]!=equal)
            return -1;

            ans+=(skill[i]*skill[j]);
            i++;j--;
        }

        return ans;
    }
};