class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int xorval=0;
        for(int ele:nums)
        xorval^=ele;

        int val1=0;
        int val2=0;

        int temp=1;
        for(int i=0;i<31;i++)
        {
            if((xorval & temp)!=0)
            break;
            temp=temp<<1;
        }

        for(int ele:nums)
        {
            if(ele & temp)
            {
                val1^=ele;
            }
            else
            val2^=ele;
        }



        return {val1,val2};


        
    }
};