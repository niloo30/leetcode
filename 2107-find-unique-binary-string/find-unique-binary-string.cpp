class Solution {
public:
    unordered_map<string,int> mp;
    string ans;
    void f(string s,int n){

        if(s.size()==n)
        {
            if(mp.find(s)==mp.end())
            ans=s;

            return ;
        }
        f(s+'0',n);
        f(s+'1',n);

    }
    string findDifferentBinaryString(vector<string>& nums) {

        for(auto ele:nums)
        mp[ele]++;

        int n=nums.size();

        f("",n);

        return ans;


        
    }
};