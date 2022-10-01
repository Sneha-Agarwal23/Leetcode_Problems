class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> ans;
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        int currsum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
            currsum += nums[i];
            if(currsum > totalsum - currsum)
                return ans;
        }
        return ans;
        
    }
};