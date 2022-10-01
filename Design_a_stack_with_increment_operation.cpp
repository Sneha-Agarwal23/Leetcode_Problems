class CustomStack {
public:
    int cap;
    vector<int> s;
    CustomStack(int maxSize) 
    {
        cap = maxSize;
    }
    
    void push(int x) 
    {
        if(s.size() < cap)
            s.push_back(x); 
    }
    
    int pop() 
    {
        if(s.size() == 0)
            return -1;
        int x = s.back();
        s.pop_back();
        return x;
    }
    
    void increment(int k, int val) 
    {
        int x = k;
        if(s.size() < k)
            x = s.size();
        for(int i = 0; i < x;i++)
        {
            s[i] += val;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */