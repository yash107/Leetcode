class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> arr(2);
        int c=0,s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                arr[0]=i;
                c++;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                arr[1]=i;
                s++;
                break;
            }
        }
        if(c==0 )
        {
            arr[0]=-1;
        }
        if(s==0)
        {
            arr[1]=-1;
        }
        return arr;
        
    }
};