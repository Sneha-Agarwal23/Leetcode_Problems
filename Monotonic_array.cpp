class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        bool f1 = true, f2 = true;
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] > nums[i+1])
                f1 = false;
            if(nums[i] < nums[i+1])
                f2 = false;
            if(f1 == false && f2 == false)
                return false;
        }
        return true;
        
    }
};