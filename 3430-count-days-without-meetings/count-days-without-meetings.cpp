class Solution {
public:
    int countDays(int days, vector<vector<int>>& arr) {


        //just merge intervals and then simulate the process right 

        int n=arr.size();

        sort(arr.begin(),arr.end());

        int start=arr[0][0];
        int end=arr[0][1];

        vector<vector<int>> intervals;
        for(int i=1;i<n;i++){
            if(arr[i][0]<=end)
            {
                end=max(end,arr[i][1]);
            }
            else
            {
                intervals.push_back({start,end});
                
                start=arr[i][0];
                end=arr[i][1];
            }
        }

        intervals.push_back({start,end});
        for(int i=0;i<intervals.size();i++){

            int l=intervals[i][0];
            int r=intervals[i][1];

            days-=(r-l+1);

        }
        return days;
    }
};