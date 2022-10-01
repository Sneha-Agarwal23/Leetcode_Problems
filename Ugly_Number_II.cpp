class Solution {
public:
    int nthUglyNumber(int n) 
    {
        if(n == 1)
            return 1;
        vector<int> ugly(n);
        ugly[0] = 1;
        int two = 0;
        int three = 0;
        int five = 0;
        for(int i = 1; i < n; i++)
        {
            ugly[i] = min(2 * ugly[two], min(3 * ugly[three], 5 * ugly[five]));
            if(ugly[i] == 2*ugly[two])
                two++;
            if(ugly[i] == 3*ugly[three])
                three++;
            if(ugly[i] == 5*ugly[five])
                five++;
        }
        return ugly[n-1];
        
    }
};