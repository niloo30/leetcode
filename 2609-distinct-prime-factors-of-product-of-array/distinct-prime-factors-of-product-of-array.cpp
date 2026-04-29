class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {

        unordered_set<int> st;

        for(auto& ele:nums){
            for(int i=2;i*i<=ele;i++)
            {
                if(ele%i==0)
                {
                    st.insert(i);
                }
                while(ele%i==0)
                {
                    ele/=i;
                }
            }
            if(ele>1)
            st.insert(ele);
        }
        return st.size();
        
    }
};