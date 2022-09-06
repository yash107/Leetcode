class Solution {
public:
int maxProductDifference(vector<int>&nums)
{
sort(nums.begin() , nums.end());
int x = 1 , y = nums.size()-2;
return (nums[y+1] * nums[y] ) - (nums[x-1] * nums[x] );
}
};