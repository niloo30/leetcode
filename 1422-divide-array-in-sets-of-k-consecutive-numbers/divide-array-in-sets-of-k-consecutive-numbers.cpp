class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {

        int n=nums.size();
        if(n%k)
        return false;

        map<int,int> mp;
        for(int ele:nums)
        mp[ele]++;

        while(!mp.empty())
        {
            int val=mp.begin()->first;
            mp[val]--;
            if(mp[val]==0)
            mp.erase(val);

            int temp=k;
            while(temp>1)
            {
                if(mp.find(val+1)==mp.end())
                {
                    return false;
                }
                else
                {
                    temp--;
                    mp[val+1]--;
                    if(mp[val+1]==0)
                    mp.erase(val+1);
                    val++;
                }
            }

        }
        return true;
    }
};