class Solution {
public:
    int numRabbits(vector<int>& answers) {

        unordered_map<int,int> mp;

        for(int ele:answers)
        mp[ele]++;


        int result=0;

        for(auto ele:mp)
        {
            // if(ele.first==0)
            // {
            //     result+=ele.second;
            //     continue;

            // }
            

            int freq=ele.second;
            int val=ele.first+1;
            while(freq>0)
            {
                result+=val;
                freq=freq-val;
            }
        }

        return result;
        
    }
};