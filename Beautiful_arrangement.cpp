class Solution {
public:
    void dp(int &ans,vector<int> v, int start)
    {
        if(start == v.size())
        {
            ans++;
            return;
        }
        for(int i = start; i < v.size(); i++)
        {
            if(v[i] % (start +1) == 0 || (start +1) % v[i] == 0)
            {
                swap(v[i],v[start]);
                dp(ans,v,start+1);
                swap(v[i],v[start]);
            }
        }
    }
    int countArrangement(int n)
    {
        int ans = 0;
        vector<int> v;
        for(int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        dp(ans,v,0);
        return ans;
        
    }
};