class Solution {
public:
    bool check(int mid,vector<int>& task,vector<int>& workers,int p,int s)
    {
        int used=0;
        multiset<int> st(begin(workers),begin(workers)+mid); // mid paryant che workers

        for(int i=mid-1;i>=0;i--)
        {
            int val=task[i];

            auto it=prev(st.end());

            if(*it>=val)
            {
                st.erase(it);
            }
            else if(used>=p)
            return false;
            else
            {
                auto least_power=st.lower_bound(val-s);
                if(least_power==st.end())
                return false;

                st.erase(least_power);
                used++;
            }
        }

        return true;

    }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {

        //task mi karu shakto range (0,n)
        // now think can i do 3 task  (say)
        // if yes store and think ki mi 4 task karu shakto ka nahi
        // if no means check kr ki mi 2 task karu shakto ki nahi

        // ans range-> (0 to n)
        //T T T T T T T F F F F F ha format asel right ...


        sort(workers.rbegin(),workers.rend());
        sort(tasks.begin(),tasks.end());
        int n=tasks.size();
        int m=workers.size();
        int l=0;
        int h=min(n,m);

        int ans=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;

            if(check(mid,tasks,workers,pills,strength))
            {
                ans=mid;
                l=mid+1;
            }
            else
            h=mid-1;

        }

        return ans;
        
    }
};