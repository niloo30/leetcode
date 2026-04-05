class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {

        int ans=0;

        int n=colors.size();

        for(int i=0;i<n;i++)
        {
            int curr=colors[i];
            int prev=colors[(i-1+n)%n];
            int next=colors[(i+1)%n];

            if(curr!=prev and curr!=next)
            ans++;

        }
        return ans;
        
    }
};