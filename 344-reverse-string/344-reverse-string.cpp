class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int high = s.size() - 1;
    int low = 0;

    while (low < high)
    {
        char temp = s[low];
        s[low++] = s[high];
        s[high--] = temp;
    }
        
    }
};