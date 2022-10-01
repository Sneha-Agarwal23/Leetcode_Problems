class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j)
    {
        if(i >= board.size() || i < 0 || j >= board[0].size() || j < 0)
            return;
        if(board[i][j] == '.')
            return;
        board[i][j] = '.';
        dfs(board, i-1, j);
        dfs(board, i+1, j);
        dfs(board, i, j-1);
        dfs(board, i, j+1);
    }
    int countBattleships(vector<vector<char>>& board)
    {
        if(board.size() == 0)
            return 0;
        int count = 0;
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == 'X')
                {
                    count++;
                    dfs(board, i, j);
                }
            }
        }
        return count;
        
    }
};