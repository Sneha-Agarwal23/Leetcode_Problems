class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> m(n, vector<int> (n));
        int i = 0;
        int k = 1;
        while(k <= n*n)
        {
            int j = i;
            while(j < n-i)
            {
                m[i][j] = k;
                k++;
                j++;
            }
            j = i+1;
            while(j < n-i)
            {
                m[j][n-i-1] = k;
                k++;
                j++;
            }
            j = n-i-2;
            while(j > i)
            {
                m[n-i-1][j] = k;
                k++;
                j--;
            }
            j = n-i-1;
            while(j > i)
            {
                m[j][i] = k;
                k++;
                j--;
            }
            i++;
        }
        return m;
        
        
    }
};