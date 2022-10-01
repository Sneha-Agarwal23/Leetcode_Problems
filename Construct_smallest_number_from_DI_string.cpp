class Solution {
public:
    string smallestNumber(string pattern) 
    {
        stack<int> s;
        string result;
        for(int i = 0; i <= pattern.length(); i++)
        {
            s.push(i+1);
            if(i == pattern.length() || pattern[i] == 'I')
            {
                while(!s.empty())
                {
                    result += to_string(s.top());
                    s.pop();
                }
            }
        }
        return result;
        
    }
};