class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        vector<int> vec1;
        for(int num : set1){
            if(set2.find(num) != set2.end()){
                vec1.push_back(num);
            }
        }
        return vec1;


    }
};