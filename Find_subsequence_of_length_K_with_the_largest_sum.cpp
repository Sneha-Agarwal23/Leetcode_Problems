class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < nums.size(); i++)
        {
            pq.push({nums[i], i});
            if(pq.size() > k)
                pq.pop();
        }
        vector<int> ans;
        vector<pair<int, int>> temp;
        while(!pq.empty())
        {
            auto x = pq.top();
            pq.pop();
            temp.push_back({x.second, x.first});
        }
        sort(temp.begin(), temp.end());
        for(int i = 0; i < k; i++)
        {
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};