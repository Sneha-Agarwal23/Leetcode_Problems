class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(m.find(i.first + 1) != m.end())
            {
                ans = max(ans, i.second + m[i.first + 1]);
            }
        }
        return ans;
    }
};