class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<vector<int>> ans(k);
        priority_queue<vector<int>> pq;
        for(auto p : points)
        {
            int x = p[0];
            int y = p[1];
            pq.push({x*x + y*y, x, y});
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        for(int i = 0; i < k; i++)
        {
            vector<int> x = pq.top();
            pq.pop();
            ans[i] = {x[1], x[2]};
        }
        return ans;
        
    }
};