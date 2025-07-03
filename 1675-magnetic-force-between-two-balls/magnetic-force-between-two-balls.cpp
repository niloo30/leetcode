class Solution {
public:
    bool check(int mid,vector<int>& arr,int m)
    {
        int count=1;// ball placed at corner
        int prev=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-prev>=mid)
            {
                count++;
                prev=arr[i];
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& arr, int m) {

        sort(arr.begin(),arr.end());

        int l=1;
        int h=1e9;
        int ans=-1;
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            if(check(mid,arr,m))
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