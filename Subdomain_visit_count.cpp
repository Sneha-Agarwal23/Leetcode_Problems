class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains)
    {
        vector<string> ans;
        unordered_map<string, int> m;
        for(auto i : cpdomains)
        {
            int j = i.find(" ");
            int n = stoi(i.substr(0, j));
            string s = i.substr(j+1, i.size()-1-j);
            for(int a = s.size()-1; a >= 0; a--)
            {
                if(s[a] == '.')
                {
                    m[s.substr(a+1, s.size()-1-a)] += n;
                }
                else if(a == 0)
                    m[s.substr(a, s.size()-a)] += n;
            }
        }
        for(auto i : m)
        {
            ans.push_back(to_string(i.second) + " " + i.first);
        }
        return ans;
        
        
    }
};