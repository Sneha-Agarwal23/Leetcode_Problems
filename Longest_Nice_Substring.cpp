class Solution {
public:
    bool check(string &s, int i, int j)
    {
        unordered_map<int, bool> m;
        for(int x = i; x <= j; x++)
        {
            m[s[x]] = true;
        }
        while(i <= j)
        {
            if(s[i] < 97)
            {
                if(m[s[i] + 32] == false)
                    return false;
            }
            else
            {
                if(m[s[i] - 32] == false)
                    return false;
            }
            i++;
        }
        return true;
    }
    string longestNiceSubstring(string s) 
    {
        string ans;
        int n = s.length();
        int maxx = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(check(s, i, j))
                {
                    if(j - i + 1 > maxx)
                    {
                        maxx = j-i+1;
                        ans = s.substr(i, j-i+1);
                    }
                }
            }
        }
        return ans;
        
        
    }
};