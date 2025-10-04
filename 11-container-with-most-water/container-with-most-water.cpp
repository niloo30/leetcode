class Solution {
public:
    int maxArea(vector<int>& arr) {

        int ans=0;
        int n=arr.size();
        int i=0,j=n-1;

        while(i<j)
        {
            ans=max(ans,min(arr[i],arr[j])*(j-i));
            if(arr[i]<=arr[j])
            i++;
            else
            j--;
        }
        return ans;
        
    }
};