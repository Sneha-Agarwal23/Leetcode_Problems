class Solution {
public:
    bool isvowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    int countVowelSubstrings(string word) 
    {
        int ans = 0;
        int n = word.length();
        for(int i = 0; i < n; i++)
        {
            unordered_map<char, int> m;
            for(int j = i; j < n && isvowel(word[j]); j++)
            {
                m[word[j]]++;
                if(m.size() == 5)
                    ans++;
            }
        }
        return ans;
    }
    
};