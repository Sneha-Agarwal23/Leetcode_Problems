class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int ans = 1;
        int count = 1;
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                count++;
                ans = max(ans, count);
            }
            else
                count = 1;
        }
        return ans;
        
    }
};