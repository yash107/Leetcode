class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int neg = 0; // number of negative numbers in given array
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) return 0; // there is no doubt, that if one of the multipliers is zero, the product is also zero
            if(nums[i] < 0) neg++; // count negative numbers in our array
        }
        return neg % 2 == 0 ? 1 : -1; // obviously, if the number of negative numbers is odd, the product is also odd
    }
};