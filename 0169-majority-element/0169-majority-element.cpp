class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int MAX_ele = 0, result = 0;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(hash[nums[i]] > MAX_ele){
                // auto MAX = max_element(MAX_ele, hash[i]);
                MAX_ele = hash[nums[i]];
                result = nums[i];
            }
        }
        return result;
    }
};