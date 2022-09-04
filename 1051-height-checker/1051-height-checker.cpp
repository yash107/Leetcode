class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector <int> ans;
        for(int i=0;i<heights.size();i++)
        {
            ans.push_back(heights[i]);
        }
        sort(ans.begin(),ans.end());
        int c=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=ans[i])
            {
                c++;
            }
        }
        return c;
        
    }
};