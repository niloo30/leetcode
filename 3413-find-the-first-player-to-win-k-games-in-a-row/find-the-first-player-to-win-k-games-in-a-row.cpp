class Solution {
public:
    int findWinningPlayer(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>=n || n==2)
        return max_element(arr.begin(),arr.end())-arr.begin();

        deque<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            q.push_back({i,0});
        }

        while(true)
        {
            pair<int,int> p1=q.front();
            q.pop_front();
            pair<int,int> p2=q.front();
            q.pop_front();

            if(arr[p1.first]>arr[p2.first])
            {
                p1.second++;
                q.push_front(p1);

                p2.second=0;
                q.push_back(p2);

                if(q.front().second==k)
                return q.front().first;
            }
            else
            {
                p2.second++;
                q.push_front(p2);

                p1.second=0;
                q.push_back(p2);

                if(q.front().second==k)
                return q.front().first;

            }

        }
        return 0;
    }
};