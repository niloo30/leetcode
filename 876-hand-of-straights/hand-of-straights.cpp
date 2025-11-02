class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        int n=hand.size();
 
        if(n % groupSize)
        return false;

        map<int,int> mp;
        for(int ele:hand)
        mp[ele]++;

        while(!mp.empty())
        {
            int t=groupSize;
            int val=mp.begin()->first;

            for(int i=0;i<t;i++)
            {
                if(mp[val+i]==0)
                return false;

                mp[val+i]--;
                if(mp[val+i]==0)
                mp.erase(val+i);
            }
            

            
        }
        return 1;
        
    }
};