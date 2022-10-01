class Solution {
public:
    string reverseParentheses(string s)
    {
        stack<int> st;
        string ans;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')')
            {
                int top = st.top();
                st.pop();
                reverse(s.begin() + top + 1 , s.begin() + i);
            }
        }
        for(auto i : s)
        {
            if(i != '(' && i != ')')
                ans.push_back(i);
        }
        return ans;
    }
};
