class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[nums[i]];
            ans.push_back(x);
        }
        return ans;
    }
};