class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        unordered_map<int, vector<int>> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]].push_back(i);
        }
        int degree = 0;
        for(auto i : m)
        {
            degree = max(degree, (int)i.second.size());
        }
        int ans = nums.size();
        for(auto i : m)
        {
            if(i.second.size() == degree)
            {
                ans = min(ans, i.second.back() - i.second[0] + 1);
            }
        }
        return ans;
        
    }
};