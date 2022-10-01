class SORTracker {
private:
    struct Min_comp
    {
        bool operator()(const pair<int, string>&a, const pair<int, string>&b)
        {
            if(a.first != b.first)
                return (a.first > b.first);
            else
                return (a.second < b.second);
        }
    };
    
    struct Max_comp
    {
        bool operator()(const pair<int, string>&a, const pair<int, string>&b)
        {
            if(a.first != b.first)
                return (a.first < b.first);
            else
                return (a.second > b.second);
        }
    };
    
    priority_queue<pair<int, string>, vector<pair<int, string>>, Max_comp> maxheap;
    priority_queue<pair<int, string>, vector<pair<int, string>>, Min_comp> minheap;

public:
    SORTracker() {
        
    }
    
    void add(string name, int score)
    {
        minheap.push({score, name});
        maxheap.push(minheap.top());
        minheap.pop();
        
    }
    
    string get()
    {
        auto x = maxheap.top();
        maxheap.pop();
        minheap.push(x);
        return x.second;
        
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */