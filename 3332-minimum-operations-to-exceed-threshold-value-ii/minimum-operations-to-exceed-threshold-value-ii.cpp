class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int n=nums.size();
       
        int count=0;
        priority_queue<long long,vector<long long >,greater<long long>> pq;
        for(auto ele:nums)
        pq.push(ele);

        while(pq.top()<k)
        {
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();

            long long temp=min(x, y)*2+max(x,y);
            pq.push(temp);
            count++;
        }
        return count;
        
    }
};