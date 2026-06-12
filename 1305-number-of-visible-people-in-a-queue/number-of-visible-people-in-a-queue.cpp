class Solution {
public:
    
    vector<int> canSeePersonsCount(vector<int>& arr) {

        int n=arr.size();
        stack<int> st;

        vector<int> ans(n);

        for(int i=n-1;i>=0;i--)
        {
            int count=0;

            while(st.size() && arr[i]>=st.top())
            {
                count++;
                st.pop();            }
            

            if(st.size())
            count+=1;

            ans[i]=count;

            st.push(arr[i]);
        }
        return ans;


        
    }
};