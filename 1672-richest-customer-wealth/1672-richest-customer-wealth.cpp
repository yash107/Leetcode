class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        vector<int> amt;
       for(int i=0;i<accounts.size();i++)
       {
           
           int x=accumulate(accounts[i].begin(),accounts[i].end(),0);
           amt.push_back(x);
       }
       sort(amt.begin(),amt.end());
        return amt[amt.size()-1];
    
    }
};