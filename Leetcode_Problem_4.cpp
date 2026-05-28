#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int full = m + n;
        vector<int> merged_array(full);
        int Sum = 0;

        for(int i = 0; i < n ;i++){
        merged_array[i] = nums1[i];}
            for(int j = 0; j < m ; j++){
            merged_array[n + j] = nums2[j];

        }
        
        sort(merged_array.begin(), merged_array.end());
          double median;
        if(full % 2 == 0){
            median = (merged_array[full/2 - 1] + merged_array[full/2]) / 2.0;
        } else {
            median = merged_array[full/2];
        }
        return median;
    }
};
