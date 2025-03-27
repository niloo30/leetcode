class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();
        int l=0;
        int h=n-1;
        int idx=0;

        while(l<h)
        {
            int mid=(l+h)/2;

            if(arr[mid]>arr[mid+1])
            {
                idx=mid;
                h=mid;
            }
            else
            l=mid+1;
        }

        return l;


        
    }
};