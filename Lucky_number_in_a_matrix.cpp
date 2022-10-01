class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix)
    {
        vector<int> ans;
        vector<int> r(matrix.size(), INT_MAX);
        vector<int> c(matrix[0].size(), INT_MIN);
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                r[i] = min(r[i], matrix[i][j]);
                c[j] = max(c[j], matrix[i][j]);
            }
        }
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(r[i] == matrix[i][j] && c[j] == matrix[i][j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
        
    }
};