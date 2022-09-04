class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            string n = to_string(nums[i]);   // Converting integer into string to find 
                                                // the individual number's length.
           if(n.size()%2==0)
               count++;
        }
        return count;
    }
};