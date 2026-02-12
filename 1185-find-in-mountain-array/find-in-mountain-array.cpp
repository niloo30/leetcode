/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIndexInMountainArray( MountainArray &arr) {

        int n=arr.length();
        int l=0;
        int h=n-1;


       
        while(l<h)
        {
            int mid=(l+h)/2;

            int midVal = arr.get(mid);
            int nextVal = arr.get(mid + 1);

            if (midVal < nextVal)
                l = mid + 1;
            else
                h = mid;
            

           
        }


        return l;
        
    }

    int f1(int l,int h,int x, MountainArray &arr)
    {
        int ans=-1;

        while(l<=h)
        {
            int mid=(l+h)/2;

            if(arr.get(mid)==x)
            return mid;
            else
            if(arr.get(mid)>x)
            h=mid-1;
            else
            l=mid+1;
        }



        return ans;
    }

    int f2(int l,int h,int x, MountainArray &arr)
    {
        int ans=-1;

        while(l<=h)
        {
            int mid=(l+h)/2;

            if(arr.get(mid)==x)
            return mid;
            else
            if(arr.get(mid)<x)
            h=mid-1;
            else
            l=mid+1;
        }



        return ans;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n=mountainArr.length();

        int peakidx=peakIndexInMountainArray(mountainArr);
        int ans=-1;


        ans=f1(0,peakidx,target,mountainArr);

        if(ans!=-1)
        return ans;


        ans=f2(peakidx+1,n-1,target,mountainArr);


        return ans;
        
    }
};