class Solution {
public:
    vector<int> closestDivisors(int num) {

        int val1=1e9;
        int val2=-1e9;

        //case 1
        //num+1

        int n=num+1;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int div1=i;
                int div2=n/i;

                if(abs(val1-val2)>abs(div1-div2))
                {
                    val1=div1;
                    val2=div2;
                }
            }
        }
        //case 2
        n=num+2;

        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int div1=i;
                int div2=n/i;

                if(abs(val1-val2)>abs(div1-div2))
                {
                    val1=div1;
                    val2=div2;
                }
            }
        }

        return {val1,val2};
        
    }
};