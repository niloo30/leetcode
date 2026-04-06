class Solution {
public:
    bool isPathCrossing(string path) {
        

        set<pair<int,int>> st;

        int n=path.size();
        pair<int,int> p={0,0};
        st.insert(p);
        for(int i=0;i<n;i++)
        {
            char ch=path[i];

            if(ch=='N')
            p.second+=1;
            else if(ch=='S')
            p.second-=1;
            else if(ch=='W')
            p.first-=1;
            else
            p.first+=1;


            if(st.contains(p))
            return true;
            st.insert(p);


        }

        return false;
    }
};