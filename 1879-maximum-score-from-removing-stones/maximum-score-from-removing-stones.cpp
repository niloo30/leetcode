class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);

        int ans=0;

        while(pq.size()>1)
        {
            int val1=pq.top();
            pq.pop();
            int val2=pq.top();
            pq.pop();

            ans++;
            val1--;
            if(val1>0)
            pq.push(val1);

            val2--;
            if(val2>0)
            pq.push(val2);
        }
        return ans;
    }
};