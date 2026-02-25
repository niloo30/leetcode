class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        auto lambda=[&](int& a,int& b)
        {
            int x=__builtin_popcount(a);
            int y=__builtin_popcount(b);

            if(x==y)return a<b;

            return x<=y ;

        };

        sort(arr.begin(),arr.end(),lambda);

        return arr;
        
    }
};