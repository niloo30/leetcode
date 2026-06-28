class Solution {
public: 
    bool check(int mid,int red,int blue)
    {
        //check whether can we form ans of mid height

        int oddh=(mid+1)/2;
        int evenh=mid/2;

        int oddh_balls=oddh*oddh;
        int evenh_balls=((mid*(mid+1))/2)-oddh_balls;


        
        return min(red,blue)>=min(oddh_balls,evenh_balls) && max(red,blue)>=max(evenh_balls,oddh_balls);
    }
    int maxHeightOfTriangle(int red, int blue) {

        int ans=0;

        int l=1;
        int h=red+blue;


        while(l<=h)
        {
            int mid=(l+h)/2;

            if(check(mid,red,blue))
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