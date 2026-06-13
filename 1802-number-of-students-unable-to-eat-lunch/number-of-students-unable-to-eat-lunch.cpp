class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int n=students.size();
        queue<int> q;
        for(int i=0;i<n;i++)
            q.push(students[i]);

        int i=0,count=0;
        while(q.size() && count!=q.size())
        {
            if(q.front()==sandwiches[i])
            {
                i++;
                q.pop();
                count=0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                count++;
            }
        }
       return sandwiches.size()-i; 
       //or
       //return q.size();
        
    }
};