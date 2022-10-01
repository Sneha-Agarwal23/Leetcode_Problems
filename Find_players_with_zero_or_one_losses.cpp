class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<vector<int>> ans(2);
        unordered_map<int, int> m;
        set<int> players;
        for(auto i : matches)
        {
            m[i[1]]++;
            players.insert(i[0]);
            players.insert(i[1]);
        }
        for(auto i : players)
        {
            if(m.count(i) == 0)
            {
                ans[0].push_back(i);
            }
            else if(m.count(i) && m[i] == 1)
                ans[1].push_back(i);
        }
        return ans;
        
        
    }
};