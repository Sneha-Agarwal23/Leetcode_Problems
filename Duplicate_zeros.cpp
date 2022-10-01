class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        /*int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
                count++;
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(arr[i] == 0)
                count--;
            if(i + count < n)
            {
                arr[i + count] = arr[i];
                if(arr[i] == 0 && i + count + 1 < n)
                    arr[i+count+1] = 0;
            }
        }*/
        
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                arr.pop_back();
                arr.insert(arr.begin() + i, 0);
                i++;
            }
        }
        
    }
};