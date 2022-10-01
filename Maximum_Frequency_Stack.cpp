class FreqStack {
    unordered_map<int, int> f;
    priority_queue<pair<int, pair<int, int>>> pq;
    int pos = 0;
public:
    FreqStack() {
        
    }
    
    void push(int val)
    {
        f[val]++;
        pq.push({f[val], {++pos, val}});
    }
    
    int pop()
    {
        auto x = pq.top();
        pq.pop();
        int y = x.second.second;
        f[y]--;
        return y;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */