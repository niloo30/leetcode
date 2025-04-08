class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int n=nums.size();

        int j=n-1;

        set<int> st;

        while(j>=0)
        {
            if(st.contains(nums[j]))
            {
                break;
            }
            st.insert(nums[j]);
            j--;
        }

        // ans-> ceil of j

        int ans=(j+3)/3; //+3 1 based indexing

        return ans;
        
    }
};