class SmallestInfiniteSet {
public:
    set<int> st;


    SmallestInfiniteSet() {
       for(int num=1;num<=1000;num++)
        {
            st.insert(num);
        } 
    }
    
    int popSmallest() {
        
        int x=*st.begin();
        

        st.erase(st.begin());
        return x;
    }
    
    void addBack(int num) {
        
        if(st.find(num)==st.end())
        {
            st.insert(num);
            
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */