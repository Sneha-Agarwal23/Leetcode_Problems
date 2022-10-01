class MyCalendarThree {
public:
    map<int, int> m;
    int maxcount = 0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) 
    {
        m[start]++;
        m[end]--;
        int c = 0;
        for(auto i : m)
        {
            c += i.second;
            maxcount = max(maxcount, c);
        }
        return maxcount;
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */