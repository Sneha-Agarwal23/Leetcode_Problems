class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target)
    {
        int n = ghosts.size();
        int pacman = abs(target[0]) + abs(target[1]);
        for(int i = 0; i < n; i++)
        {
            int ghost = abs(target[0] - ghosts[i][0]) + abs(target[1] - ghosts[i][1]);
            if(ghost <= pacman)
                return false;
        }
        return true;
    }
};