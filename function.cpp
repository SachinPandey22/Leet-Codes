// LeetCode Problem no 26.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int indexsize = 1;
        //int count = nums.size();
        for (int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[indexsize] = nums[i];
                indexsize ++;
            }
        }
       
        return indexsize;

        
    }
};
