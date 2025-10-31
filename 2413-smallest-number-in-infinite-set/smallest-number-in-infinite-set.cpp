class SmallestInfiniteSet {
public:
    unordered_set<int> st;
    priority_queue<int,vector<int>,greater<int>> pq;


    SmallestInfiniteSet() {
       for(int num=1;num<=1000;num++)
        {
            st.insert(num);
            pq.push(num);
        } 
    }
    
    int popSmallest() {
        
        int x=pq.top();
        pq.pop();

        st.erase(x);
        return x;
    }
    
    void addBack(int num) {
        
        if(st.find(num)==st.end())
        {
            st.insert(num);
            pq.push(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */