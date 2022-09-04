class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int smallest = nums[0];
    int greatest = nums[0];
    
    for(int i=0; i<nums.size(); i++){
        smallest = min(smallest, nums[i]);
        greatest = max(greatest, nums[i]);
    }
    
    for(int i=smallest; i>=1; i--){
        if(smallest%i == 0 && greatest%i == 0)
            return i;
    }
    return 1;
    }
};