class Solution {
public:
    string strWithout3a3b(int a, int b) {
        
        string s="";
        while(a>0 || b>0)
        {
            if( a>b)
            {
                if(b>0)
                s+=("aab");
                else
                if(a>=2)
                s+="aa";
                else
                s+="a";
                a=a-2;
                b--;
            }
            else if(b>a)
            {
                if(a>0)
                s+=("bba");
                else
                if(b>=2)
                s+=("bb");
                else
                s+="b";
                a--;
                b-=2;
            }
            else if(a==b)
            {
                if(s.size()==0 || s.back()=='a')
                {
                    s+=("ba");
                }
                else if(s.back()=='b')
                {
                    s+=("ab");
                }
                a--;b--;
            }

        }
        return s;
        
    }
};