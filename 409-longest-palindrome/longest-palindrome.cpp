class Solution {
public:
    int longestPalindrome(string s) {

        vector<int> arr(256);
        for(char ch:s)
        arr[ch]++;


        int ans=s.size();

        bool odd=false;
        for(int i=0;i<256;i++)
        {
            if(arr[i]&1)
            {
                odd=true;
                ans--;
            }
        }

        if(odd)ans++;
        return ans;
        
    }
};