class Solution {
public:
    int climbStairs(int n) 
    {
        /*vector<int> step(n, 0);
        step[0] = 1;
        step[1] = 2;
        for(int i = 2; i < n; i++)
        {
            step[i] = step[i-1] + step[i-2];
        }
        return step[n-1];*/
        
        
        /*if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        return climbStairs(n-1) + climbStairs(n-2);*/
        
        if(n <= 2)
            return n;
        int p = 2,q = 1,ans;
        for(int i = 3; i <= n;i++)
        {
            ans = p+q;
            q = p;
            p = ans;
        }
        return ans;
    }
};