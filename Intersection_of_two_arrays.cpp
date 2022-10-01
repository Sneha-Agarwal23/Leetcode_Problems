class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        set<int> s(nums1.begin(), nums1.end());
        for(auto i : nums2)
        {
            if(s.erase(i))
                ans.push_back(i);
        }
        return ans;
    }
};