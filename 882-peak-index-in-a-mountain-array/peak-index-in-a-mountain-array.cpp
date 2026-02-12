class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();
        int l=0;
        int h=n-1;


        int ans=-1;
        while(l<=h)
        {
            int mid=(l+h)/2;


            if(mid+1<n and mid-1>=0 and arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1])
            {
                ans =mid;
                break;
            }
            else if(arr[mid]>arr[mid+1])
            {
                h=mid-1;
            }
            else
            l=mid+1;
        }


        return ans;
        
    }
};