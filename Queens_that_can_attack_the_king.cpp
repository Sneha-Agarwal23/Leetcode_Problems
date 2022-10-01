class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king)
    {
        vector<vector<int>> ans;
        map<pair<int, int>, bool> m;
        for(auto q : queens)
        {
            m[{q[0], q[1]}] = true;
        }
        int kr = king[0], kc = king[1];
        //top
        for(int i = kr; i >= 0; i--)
        {
            if(m.find({i,kc}) != m.end())
            {
                ans.push_back({i, kc});
                break;
            }
        }
        //down
        for(int i = kr; i < 8; i++)
        {
            if(m.find({i,kc}) != m.end())
            {
                ans.push_back({i, kc});
                break;
            }
        }
        //left
        for(int j = kc; j >= 0; j--)
        {
            if(m.find({kr, j}) != m.end())
            {
                ans.push_back({kr, j});
                break;
            }
        }
        //right
        for(int j = kc; j < 8; j++)
        {
            if(m.find({kr, j}) != m.end())
            {
                ans.push_back({kr, j});
                break;
            }
        }
        //top left diagonal
        
        for(int i = kr,j = kc; i >= 0 && j >= 0;i--,j--)
        {
            if(m.find({i, j}) != m.end())
            {
                ans.push_back({i, j});
                break;
            }
        }
        //top right diagonal
        for(int i = kr,j = kc; i >= 0 && j < 8;i--,j++)
        {
            if(m.find({i, j}) != m.end())
            {
                ans.push_back({i, j});
                break;
            }
        }
        //bottom left diagonal
        for(int i = kr,j = kc; i < 8 && j >= 0;i++,j--)
        {
            if(m.find({i, j}) != m.end())
            {
                ans.push_back({i, j});
                break;
            }
        }
        //bottom right diagonal
        for(int i = kr,j = kc; i < 8 && j < 8;i++,j++)
        {
            if(m.find({i, j}) != m.end())
            {
                ans.push_back({i, j});
                break;
            }
        }
        return ans;
        
    }
};