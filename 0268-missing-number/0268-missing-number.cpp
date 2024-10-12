class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int arr_sum = 0;
        for(int i = 1; i <= nums.size(); i++){
            sum += i;
            arr_sum += nums[i-1];
        }
        if(sum == arr_sum){
            return 0;
        }
        else return sum - arr_sum;
    }
};