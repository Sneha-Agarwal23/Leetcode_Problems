class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        vector<string> v;
        unordered_set<char> s1 = {'q', 'w', 'e', 'r', 't', 'y', 'u','i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        unordered_set<char> s2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K','L'};
        unordered_set<char> s3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        for(auto i : words)
        {
            bool flag1 = true, flag2 = true, flag3 = true;
            for(auto ch : i)
            {
                if(flag1 == true)
                {
                    if(s1.find(ch) == s1.end())
                        flag1 = false;
                }
                if(flag2 == true)
                {
                    if(s2.find(ch) == s2.end())
                        flag2 = false;
                }
                if(flag3 == true)
                {
                    if(s3.find(ch) == s3.end())
                        flag3 = false;
                }
            }
            if(flag1 ||flag2 || flag3)
                v.push_back(i);
        }
        return v;
    }
};