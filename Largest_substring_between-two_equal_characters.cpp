class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        int ans = -1;
        int n = s.length();
        unordered_map<char, int> m;
        for(int i = 0; i < n; i++)
        {
            if(m.count(s[i]))
                ans = max(ans, i - m[s[i]] - 1);
            else
                m[s[i]] = i;
        }
        return ans;
        
    }
};