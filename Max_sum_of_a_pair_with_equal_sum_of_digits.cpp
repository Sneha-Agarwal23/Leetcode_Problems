class Solution {
public:
    int maximumSum(vector<int>& nums) 
    {
        int ans = -1;
        unordered_map<int, int> m;
        for(auto i : nums)
        {
            string s = to_string(i);
            int sum = 0;
            for(auto ch : s)
            {
                sum += ch - '0';
            }
            if(m.count(sum))
            {
                ans = max(ans, i+m[sum]);
            }
            m[sum] = max(m[sum], i);
        }
        return ans;
        
    }
};