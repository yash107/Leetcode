class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        int words=0;
        for(int i=0;i<sentences.size();i++){
            words=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    words++;
                }
                
            }
            
            maxi=max(maxi,words+1);
        }
        return maxi;
    }
};