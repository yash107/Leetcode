class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int i;
        int sum=0;
        for(i=0 ; i<nums.size() ; i++){
            sum = sum+nums[i];
        }
        int left_sum=0;
        for(i=0 ; i<nums.size() ; i++){
            if(left_sum == sum-nums[i]-left_sum)
                return i;
            left_sum = left_sum+nums[i];
        }
        return -1;
    }
};