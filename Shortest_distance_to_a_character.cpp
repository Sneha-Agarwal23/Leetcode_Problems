class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int> ans;
        vector<int> pos;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == c)
                pos.push_back(i);
        }
        for(int i = 0; i < s.size(); i++)
        {
            int x = INT_MAX;
            for(int j = 0; j < pos.size(); j++)
            {
                x = min(x, abs(i - pos[j]));
            }
            ans.push_back(x);
        }
        return ans;
        
    }
};