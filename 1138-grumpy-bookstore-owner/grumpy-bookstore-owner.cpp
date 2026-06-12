class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int ans=0;
        int n=grumpy.size();
        for(int i=0;i<n;i++)
        {
            if(!grumpy[i])
            ans+=customers[i];
        }

        int temp=ans;
        int i=0,j=0;

        while(j<n)
        {
            if(grumpy[j])
            temp+=customers[j];
            if(j-i+1==minutes)
            {

                ans=max(temp,ans);

                //slide the window 
                if(grumpy[i]==1)
                {
                    temp-=customers[i];
                }
                i++;
            }
            j++;
        }

        return ans;


        
    }
};