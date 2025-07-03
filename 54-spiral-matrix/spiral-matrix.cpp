class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {

        int n=arr.size();
        if(n==0)
        return {};
        int m=arr[0].size();
        vector<int> ans;
        int top=0;
        int left=0;
        int right=m-1;
        int down=n-1;
        int val=0;
        while(top<=down && left<=right)
        {
            if(val==0)
            {
                for(int i=left;i<=right;i++)
                ans.push_back(arr[top][i]);

                top++;

            }
            if(val==1)
            {
                for(int i=top;i<=down;i++)
                ans.push_back(arr[i][right]);
                right--;

            }
            if(val==2)
            {
                for(int i=right;i>=left;i--)
                ans.push_back(arr[down][i]);
                down--;

            }
            if(val==3)
            {
                for(int i=down;i>=top;i--)
                ans.push_back(arr[i][left]);
                left++;

            }
            val++;
            if(val==4)
            val=0;

        }
        return ans;
        
    }
};