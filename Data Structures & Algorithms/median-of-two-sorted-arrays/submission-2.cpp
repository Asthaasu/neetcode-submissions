class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> sum;

        for (int x : nums1)
            sum.push_back(x);

        for (int x : nums2)
            sum.push_back(x);
        sort(sum.begin(), sum.end());
        int size = sum.size();

        if(size % 2 == 1)
            return sum[size/2];
        else
            return (sum[size/2] + sum[(size/2 )- 1]) / 2.0;
        
    }
};
