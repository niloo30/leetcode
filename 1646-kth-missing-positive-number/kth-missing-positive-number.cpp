class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        set<int> st(arr.begin(),arr.end());
        int count=0;

        int ans=-1;
        int i=1;
        while(1)
        {
            if(st.find(i)==st.end())
            {
                count++;
                if(count==k)
                {
                    ans=i;
                    break;
                }
            }
            i++;
        }


        return ans;
        
    }
};