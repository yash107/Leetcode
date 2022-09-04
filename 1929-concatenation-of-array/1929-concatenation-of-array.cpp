class Solution {
public:
    vector<int> getConcatenation(vector<int>& n) {
        int size = n.size(); 
        for(int i = 0 ; i < size; i++)
        {
            n.push_back(n[i]);
        }
        return n;
    }
};