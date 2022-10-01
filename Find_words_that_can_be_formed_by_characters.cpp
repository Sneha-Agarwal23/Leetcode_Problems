class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        unordered_map<char, int> m;
        for(int i = 0; i < chars.length(); i++)
        {
            m[chars[i]]++;
        }
        string r = "";
        for(auto i : words)
        {
            bool flag = true;
            unordered_map<char, int> p;
            for(auto ch : i)
            {
                p[ch]++;
            }
            for(auto ch : i)
            {
                if(p[ch] > m[ch])
                    flag = false;
            }
            if(flag == true)
                r += i;
        }
        return r.length();
        
    }
};