class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b)
    {
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        vector<vector<int>> ans;
        sort(people.begin(), people.end(), comp);
        for(auto x : people)
        {
            ans.insert(ans.begin()+x[1],x);
        }
        return ans;
    }
};