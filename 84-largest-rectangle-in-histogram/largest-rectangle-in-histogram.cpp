class Solution {
public:
    vector<int> f1(vector<int>& arr)
    {
        int n=arr.size();
        vector<int> nse(n);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--)
        {
            while(st.size() && arr[st.top()]>=arr[i])
            st.pop();
            
            if(st.size()==0)
            nse[i]=n;
            else
            nse[i]=st.top();
            
            st.push(i);
            
        }
        
        return nse;
    }
    
    vector<int> f2(vector<int>& arr)
    {
        int n=arr.size();
        vector<int> pse(n);
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            while(st.size() && arr[st.top()]>=arr[i])
            st.pop();
            
            if(st.size()==0)
            pse[i]=-1;
            else
            pse[i]=st.top();
            
            st.push(i);
            
        }
        
        return pse;
    }
    int largestRectangleArea(vector<int>& arr) {

        int n=arr.size();
        vector<int> nse=f1(arr);
        vector<int> pse=f2(arr);
        //area arr[i] *(nse[i]-pse[i]-1);
        //maximum
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int h=arr[i];
            int w=(nse[i]-pse[i])-1;
            
            int area=h*w;
            
            ans=max(ans,area);
        }
        
        return ans;
        
        
    }
};