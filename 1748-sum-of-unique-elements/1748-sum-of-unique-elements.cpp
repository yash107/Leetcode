class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int arr[101] = {0};
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            arr[nums[i]]++;
        }
        
        int sum = 0;
        for(int i = 0 ; i < 101 ; i++)
        {
            if(arr[i] == 1)
                sum = sum + i;
        }
        return sum;
    }
};