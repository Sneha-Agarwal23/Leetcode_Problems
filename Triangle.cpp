class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n = triangle.size();
        vector<int> nextele(n);
        for(int i = n-1; i >= 0; i--)
        {
            vector<int> curele(n);
            for(int j = i; j >= 0; j--)
            {
                if(i == n-1)
                    curele[j] = triangle[i][j];
                else
                {
                    int up = triangle[i][j] + nextele[j];
                    int up_left = triangle[i][j] + nextele[j+1];
                    curele[j] = min(up, up_left);
                }
            }
            nextele = curele;
        }
        return nextele[0];
        
        
    }
};