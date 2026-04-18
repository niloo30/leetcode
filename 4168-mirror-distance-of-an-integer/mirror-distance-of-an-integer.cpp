class Solution {
public:
    int rev(int num){ 
        int r=0;
        while(num>0){
            r=10*r+(num%10);
            num/=10;
        }
        return r;
    }
    int mirrorDistance(int n) {

        return abs(n-rev(n));
        
    }
};