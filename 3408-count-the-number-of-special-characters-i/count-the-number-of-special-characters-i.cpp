class Solution {
public:
    int numberOfSpecialChars(string word) {
         vector<int> v(26);
    int n=word.length();

    for(int i=0;i<n;i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            if (v[word[i] - 97] == 0)
                v[word[i] - 97]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            if(v[word[i]-65]!=0)
                v[word[i]-65]++;
        }


    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=2)
            count++;
    }

  return count;

        
    }
};