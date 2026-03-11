class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0)return 1;
        int numbits=(int)(log2(num))+1;
        for(int i=0;i<numbits;i++)
        {
            num=num^(1<<i);
        }
        return num;
        
    }
};