class Solution {
public:
    int longestPalindrome(string s)
    {
        int ans = 0;
        unordered_map<int , int> m;
        for(int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if(m[s[i]]%2 == 0)
            {
                ans += m[s[i]];
                m[s[i]] = 0;
            }
        }
        for(auto i : m)
        {
            if(i.second == 1)
            {
                ans++;
                break;
            }
        }
        return ans;
        
    }
};