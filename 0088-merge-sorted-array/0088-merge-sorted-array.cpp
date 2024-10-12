class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if(nums1.size() > 0){
        //     int j = 0;
        //     for(int i = m; i < m + n; i++){
        //         nums1[i] = nums2[j];
        //         j++;
        //     }
        //     sort(nums1.begin(), nums1.end());
        //     int i = 0;
        //     while(i < nums1.size()){
        //         cout << nums1[i];
        //         i++;
        //     }
        // }
        // else {
        //     int k = 0;
        //     while(k < nums2.size()){
        //         cout << nums2[k];
        //         k++;
        //     }
        // }

    //     int a = nums1.size() - 1;  /// 1 2 3  
    //                     /// 2 3 4
    //     int b = 0;
    //     size_t new_size = m+n;
    //     nums1.resize(new_size, 0);
    //     if(nums1.size() > 0){
    //     for(int i = 0; i < n; i++){
    //     if(nums1[a] > nums2[b]){
    //         nums1[a+1] = nums1[a];
    //         nums1[a] = nums2[b];
    //         a++, b++;
    //     }
    //     else {
    //         nums1[a+1] = nums2[b];
    //         a++, b++;
    //     }
    //   }
    //   int i  = 0;
    //   while(i < nums1.size()){
    //             cout << nums1[i];
    //             i++;
    //         }
    // }
    // else {
    //         int k = 0;
    //         while(k < nums2.size()){
    //             cout << nums2[k];
    //             k++;
    //         }
    //     }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i >=0 && j >= 0){
        if(nums2[j] > nums1[i]){
            nums1[k--] = nums2[j--];
        }
        else{
            nums1[k--] = nums1[i--];
        }
    }
    while(j >= 0){
        nums1[k--] = nums2[j--];
    }
}
};