class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int i = 0;
        while(i < nums.size()-1){
            if(nums[i] != nums[i+1]){
                nums[j] = nums[i+1];
                j++;
            }
            i++;
        }
        return j;

    }
};