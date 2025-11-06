class MedianFinder {
public:
    multiset<int> s1,s2;
    MedianFinder() {
        
    }
    
    void addNum(int num) {

        if(s1.empty())
        {
            s1.insert(num);
            return ;
        }
        int val=*s1.rbegin();
        if(num<=val)
        s1.insert(num);
        else
        s2.insert(num);

        //adjustment 
        if(s2.size()>s1.size())
        {
            int val=*s2.begin();
            s1.insert(val);
            s2.erase(s2.begin());

            return ;
        }

        if(s1.size()>1+s2.size())
        {
            int val=*s1.rbegin();
            s1.erase(prev(s1.end()));
            s2.insert(val);
            return ;
        }

        
    }
    
    double findMedian() {
        if(s1.size()!=s2.size())

        return *s1.rbegin();

        double val=(*s1.rbegin()+*s2.begin())/2.0;

        return val;

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */