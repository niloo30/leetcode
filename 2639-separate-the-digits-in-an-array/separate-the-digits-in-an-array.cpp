class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> ans;

        for(auto& ele:nums){
            vector<int> temp;
            while(ele>0)
            {
                temp.push_back(ele%10);
                ele/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int it:temp)
            ans.push_back(it);
        }
        return ans;
        
    }
};