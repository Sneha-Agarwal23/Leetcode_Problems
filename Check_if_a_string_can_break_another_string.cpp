class Solution {
public:
    bool checkIfCanBreak(string s1, string s2)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int n = s1.length();
        bool flag1 = true;
        bool flag2 = true;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] < s2[i])
                flag1 = false;
            if(s2[i] < s1[i])
                flag2 = false;
        }
        if(flag1 == true || flag2 == true)
            return true;
        return false;
        
    }
};