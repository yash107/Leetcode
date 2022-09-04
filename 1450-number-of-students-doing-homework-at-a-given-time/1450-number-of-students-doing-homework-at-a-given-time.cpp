class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) 
    {
        vector <int>ans;
        for(int i=0;i<startTime.size();i++)
        {
            for(int j=0;j<endTime.size();j++)
            {
                if(i==j)
                {
                    for(int k=startTime[i];k<=endTime[j];k++)
                    {
                        if(k==queryTime)
                        {
                            ans.push_back(i);
                        }
                    }
                }
            }
        }
        return ans.size();
        
    }
};