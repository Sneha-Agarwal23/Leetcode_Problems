class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<bool>& v, int start)
    {
        v[start] = true;
        for(int i = 0; i < rooms[start].size(); i++)
        {
            if(v[rooms[start][i]] == false)
                dfs(rooms, v, rooms[start][i]);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int n = rooms.size();
        vector<bool> v(n, false);
        dfs(rooms, v, 0);
        for(int i = 0; i < n; i++)
        {
            if(v[i] == false)
                return false;
        }
        return true;
    }
};