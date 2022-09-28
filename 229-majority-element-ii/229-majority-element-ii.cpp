class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> ans;
        unordered_map<int,int> arr;
        for(auto x:nums)
        {
            arr[x]++;
        }
        for(auto it=arr.begin(); it!=arr.end(); it++)
        {
            if((it->second)>(nums.size())/3)
            {
                auto y=it->first;
                ans.push_back(y);
            }
        }
        return ans;
        
    }
};