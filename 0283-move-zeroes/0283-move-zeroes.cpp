class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int ptr1 = 0; 
            int ptr2 = ptr1 + 1;
            int no = 0;
            while( no < nums.size()){
            if(ptr2 < nums.size() && nums[ptr1] == 0){
                swap(nums[ptr1], nums[ptr2]);
            }
            ptr1++, ptr2++, no++;
            }
        }
    }
};