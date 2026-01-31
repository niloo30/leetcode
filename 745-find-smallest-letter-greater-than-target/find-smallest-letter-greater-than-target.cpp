class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n=letters.size();
        int pos=-1;

        int l=0;int h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(letters[mid]<=target)
            l=mid+1;
            else
            {
                pos=mid;
                h=mid-1;
            }
            
        }
        if(pos==-1)
        return letters[0];

        return letters[pos];

        
    }
};