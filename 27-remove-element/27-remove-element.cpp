class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==val){
                c++;
                nums[i]=51; // as constraints mention: 0 <= nums[i] <= 50 
            }
        }
        sort(nums.begin(), nums.end()); // sorting array
        nums.erase(nums.end()-c, nums.end()); // erasing 51 values
        return nums.size();
    }
};