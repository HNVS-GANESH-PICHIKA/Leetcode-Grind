class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if(it != nums.end()){
            int index = distance(nums.begin(), it);
            return index;
        }
        else{
            auto it = lower_bound(nums.begin(), nums.end(), target);
            int index = distance(nums.begin(), it);
            return index;
        }

    }
};