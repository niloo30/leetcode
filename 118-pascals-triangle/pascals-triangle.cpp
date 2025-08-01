class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int i=0;i<numRows;i++)
        {
            vector<int> temp(i+1,1);
            if(ans.size())
            {
                vector<int> arr=ans.back();

                for(int j=1;j<temp.size()-1;j++)
                {
                    temp[j]=arr[j-1]+arr[j];
                }
            }
            ans.push_back(temp);
        }

        return ans;
        
    }
};