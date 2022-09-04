class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int>digits;
        for(int i=0;i<4;i++)
        {
            digits.push_back(num%10);
            num=num/10;
        }
        sort(digits.begin(),digits.end());
        int first=(digits[0]*10)+digits[2];
        int second=(digits[1]*10)+digits[3];
        return first+second;
        
        
    }
};