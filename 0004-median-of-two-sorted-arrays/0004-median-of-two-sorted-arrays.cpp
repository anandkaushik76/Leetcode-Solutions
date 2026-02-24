class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
     vector<int> result(m + n);

    merge(nums1.begin(), nums1.end(),
          nums2.begin(), nums2.end(),
          result.begin());
          int total = m + n;

        if(total % 2 == 1) {
            return result[total / 2];
        } 
        else {
            return (result[total / 2 - 1] + result[total / 2]) / 2.0;
        }
    }
};