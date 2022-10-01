class SmallestInfiniteSet {
public:
    set<int> s;
    int c;
    SmallestInfiniteSet() 
    {
        c = 1;
        
    }
    
    int popSmallest()
    {
        int x = c;
        if(!s.empty())
        {
            x = *s.begin();
            s.erase(s.begin());
            return x;
        }
        c++;
        return x;
    }
    
    void addBack(int num)
    {
        if(num < c)
            s.insert(num);
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */