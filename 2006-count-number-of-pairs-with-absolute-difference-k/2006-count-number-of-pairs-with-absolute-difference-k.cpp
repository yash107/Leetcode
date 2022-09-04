class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        vector <int> ans;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
              if(nums[i]-nums[j]==k||nums[j]-nums[i]==k)
                {
                    ans.push_back(j);
                }
            }
        }
        return ans.size();
        
    }
};