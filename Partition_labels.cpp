class Solution {
public:
    vector<int> partitionLabels(string s)
    {
        int n = s.length();
        unordered_map<char, int> m;
        for(int i = 0; i < n; i++)
        {
            m[s[i]] = i;
        }
        vector<int> ans;
        int prev = -1, maxx = 0;
        for(int i = 0; i < n; i++)
        {
            maxx = max(maxx, m[s[i]]);
            if(i == maxx)
            {
                ans.push_back(maxx - prev);
                prev = maxx;
            }
        }
        return ans;
        
    }
};