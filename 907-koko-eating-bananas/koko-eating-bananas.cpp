class Solution {
public:
    #define ll long long
    bool check(int mid,vector<int>& arr,int h)
    {
        ll val=0;
        for(int ele: arr)
        {
            val+=((ele+mid-1)/mid);
        }
        return val<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // classical BS on answers
        // kmax-> max ele 
        // kmin= 0

        int maxi=*max_element(piles.begin(),piles.end());

        int ans=maxi;

        int l=1;
        int high=maxi;

        while(l<=high)
        {
            int mid=(l+(high-l)/2);
            if(check(mid,piles,h))
            {
                ans=mid;
                high=mid-1;
            }
            else
            l=mid+1;
        } 

        return ans;
        
    }
};