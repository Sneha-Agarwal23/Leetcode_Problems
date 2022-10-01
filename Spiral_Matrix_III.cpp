class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) 
    {
        vector<vector<int>> ans = {{rStart,cStart}};
        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int l = 0,d=0;
        while(ans.size() < rows*cols)
        {
            if(d == 0 || d == 2)
                l++;
            for(int i = 0; i < l; i++)
            {
                rStart += dir[d][0];
                cStart += dir[d][1];
                if(rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
                    ans.push_back({rStart, cStart});
            }
            d = (d+1)%4;
        }
        return ans;
    }
};