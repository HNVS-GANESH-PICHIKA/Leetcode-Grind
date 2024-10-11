class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size() > 0){
            int j = 0;
            for(int i = m; i < m + n; i++){
                nums1[i] = nums2[j];
                j++;
            }
            sort(nums1.begin(), nums1.end());
            int i = 0;
            while(i < nums1.size()){
                cout << nums1[i];
                i++;
            }
        }
        else {
            int k = 0;
            while(k < nums2.size()){
                cout << nums2[k];
                k++;
            }
        }
    }
};