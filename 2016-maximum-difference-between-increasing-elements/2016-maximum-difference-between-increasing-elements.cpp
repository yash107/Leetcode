

class Solution {
public:
    int maximumDifference(vector<int>& nums)
    {
        int max=nums[0]-nums[0];
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i<j)
                {
                    if(nums[j]-nums[i]>=max)
                    {
                        max=nums[j]-nums[i];
                    }
                }
            }
        }
        if(max>0)
        {
            return max;

        }
        else{
            return -1;
        }
       
    }
};