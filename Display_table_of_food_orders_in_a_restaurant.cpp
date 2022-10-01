class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) 
    {
        vector<vector<string>> ans;
        set<string> food;
        map<int, map<string, int>> m;
        vector<string> first;
        first.push_back("Table");
        for(int i = 0; i < orders.size(); i++)
        {
            food.insert(orders[i][2]);
            m[stoi(orders[i][1])][orders[i][2]]++;
        }
        for(auto i : food)
        {
            first.push_back(i);
        }
        ans.push_back(first);
        for(auto i : m)
        {
            vector<string> temp;
            temp.push_back(to_string(i.first));
            for(auto j : food)
            {
                if(i.second.find(j) != i.second.end())
                {
                    temp.push_back(to_string(i.second[j]));
                }
                else
                    temp.push_back("0");
            }
            ans.push_back(temp);
            
        }
        return ans;
        
        
    }
};