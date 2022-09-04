class Solution {
public:
    bool check(string st){
        int n=st.length();
        for(int i=0;i<n/2;i++){
            if(st[i] != st[n-i-1]){
                return 0;
            }
        }
        
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if( check(it) == true ) return it;
        }
        return "";
    }
};