class Solution {
public:
    int balancedString(string s) 
    {
        unordered_map<char, int> m;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        int l = 0;
        int i = 0;
        int ans = n;
        int x = n/4;
        while(i < n)
        {
            m[s[i]]--;
            while(m['Q'] <= x && m['W'] <= x && m['E'] <= x && m['R'] <= x)
            {
                m[s[l]]++;
                ans = min(ans, i-l+1);
                l++;
                if(l >= n)
                    break;
            }
            i++;
        }
        return ans;
        
    }
};