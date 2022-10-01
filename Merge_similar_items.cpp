class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
        vector<vector<int>> ans;
        map<int, int> m;
        for(auto i : items1)
        {
            m[i[0]] += i[1];
        }
        for(auto i : items2)
        {
            m[i[0]] += i[1];
        }
        for(auto i : m)
        {
            ans.push_back({i.first, i.second});
        }
        return ans;
        
    }
};