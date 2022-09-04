class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxSq=0;
        int max = 0;
        int ans = 0;
        for(int i=0;i<rectangles.size();i++){
            int len=rectangles[i][0];
            int wid=rectangles[i][1];
            if(len>wid){
                rectangles[i][0] = rectangles[i][1];
            }
            else
                rectangles[i][1] = rectangles[i][0];   

            maxSq = rectangles[i][0];
            if(maxSq>max){
                max = maxSq;
                ans = 1;
            }
            else if(max == maxSq)
                ans = ans+1;
        }

        return ans;
    }
};