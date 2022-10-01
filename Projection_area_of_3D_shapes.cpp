class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) 
    {
        int area = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            int maxrow = INT_MIN;
            int maxcol = INT_MIN;
            for(int j = 0; j < grid[0].size(); j++)
            {
                maxcol = max(maxcol, grid[i][j]);
                maxrow = max(maxrow, grid[j][i]);
                if(grid[i][j])
                    area++;
            }
            area += maxcol;
            area += maxrow;
        }
        return area;
        
    }
};