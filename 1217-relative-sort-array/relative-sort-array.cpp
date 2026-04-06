class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        

        vector<int> ans;
        vector<int> arr(1001);
        for(int ele:arr1)
        {
            arr[ele]++;
        }

        for(int ele:arr2)
        {
            

            while(arr[ele]>0)
            {
                ans.push_back(ele);
                arr[ele]--;

            }
            
        }

        for(int i=0;i<=1000;i++)
        {
            int freq=arr[i];

            while(freq--)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};