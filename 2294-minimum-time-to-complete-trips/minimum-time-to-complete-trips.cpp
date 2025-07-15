class Solution {
public:
    #define ll long long
    bool check( ll mid,vector<int>& time,int totalTrips)
    {
        ll total=0;
        for(auto ele:time)
        total+=(mid/ele);

        return total>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {

        ll l=1;
        ll h=1e14;

        ll ans;

        while(l<=h)
        {
            ll mid=(l+(h-l)/2);

            if(check(mid,time,totalTrips))
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }

        return ans;
        
    }
};