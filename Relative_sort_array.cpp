class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        map<int, int> m;
        for(int i = 0; i < arr1.size(); i++)
        {
            m[arr1[i]]++;
        }
        int j = 0;
        for(int i = 0; i < arr2.size(); i++)
        {
            while(m[arr2[i]] > 0)
            {
                arr1[j] = arr2[i];
                j++;
                m[arr2[i]]--;
            }
        }
        for(auto x : m)
        {
            while(x.second > 0)
            {
                arr1[j] = x.first;
                x.second--;
                j++;
            }
        }
        return arr1;
        
    }
};