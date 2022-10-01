class Solution {
public:
    int findMinFibonacciNumbers(int k)
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        for(int i = 2;; i++)
        {
            if((v[i-1] + v[i-2])> k)
                break;
            v.push_back(v[i-1] + v[i-2]);
        }
        int count = 0;
        int j = v.size() - 1;
        while(k != 0)
        {
            int x = v[j];
            count += k / x;
            k = k % x;
            j--;
        }
        return count;
        
    }
};