class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int ans=0;
        for(auto& ele:nums)
        {
            int div_sum=0;
            int divs=0;

            for(int i=1;i*i<=ele;i++)
            {
                if(ele%i==0){
                    int div1=i;
                    int div2=ele/i;

                    div_sum+=div1;
                    divs++;

                    if(div1!=div2){

                        divs++;
                        div_sum+=div2;
                    }
                }
                if(divs>4)
                break;
            }
            if(divs==4)
            ans+=div_sum;
        }

        return ans;
        
    }
};