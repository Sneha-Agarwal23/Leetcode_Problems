class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int ans = 0;
        int a = 0;
        priority_queue<int> pq;
        for(auto x : m)
        {
            pq.push(x.second);
        }
        while(a < n/2)
        {
            a += pq.top();
            pq.pop();
            ans++;
        }
        return ans;
        
        
        
    }
};