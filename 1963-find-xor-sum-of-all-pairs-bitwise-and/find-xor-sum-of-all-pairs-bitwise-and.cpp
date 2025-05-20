class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {

        int val=0;
        for(int ele:arr2)
        val^=ele;

        int ans=0;

        for(int ele:arr1)
        {
            ans^=(ele&val);
        }


        return ans;
        
    }
};