class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.length();
        int i = 1, j = 0;
        vector<int> v(n+1, 0);
        while(i < n)
        {
            if(s[i] == s[j])
            {
                i++;
                j++;
                v[i] = j;
            }
            else if(j == 0)
                i++;
            else
                j = v[j];
        }
        return v[n] && v[n] % (n - v[n]) == 0;
    }
};