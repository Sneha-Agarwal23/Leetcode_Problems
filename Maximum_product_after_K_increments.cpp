class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) 
    {
        int mod = 1000000007;
        long long int ans = 1;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i : nums)
        {
            pq.push(i);
        }
        while(k > 0)
        {
            int x = pq.top();
            pq.pop();
            x = x + 1;
            pq.push(x);
            k--;
        }
        while(!pq.empty())
        {
            int x = pq.top();
            pq.pop();
            ans = (ans * x) % mod;
        }
        return ans;
        
    }
};