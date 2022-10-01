class Solution {
public:
    int largestInteger(int num) 
    {
        priority_queue<int> p;
        priority_queue<int> q;
        string r = to_string(num);
        int n = r.size();
        for(int i = 0; i < n; i++)
        {
            int digit = r[i] - '0';
            if(digit % 2 == 0)
                p.push(digit);
            else
                q.push(digit);
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans = ans * 10;
            int x = r[i] - '0';
            if(x % 2 == 0)
            {
                ans += p.top();
                p.pop();
            }
            else
            {
                ans += q.top();
                q.pop();
            }
        }
        return ans;
        
    }
};