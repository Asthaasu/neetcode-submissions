class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = INT_MAX;
        int n = nums.size();
        int r = n-1;
        int l=0;
        while(l<=r){
            int m = l+(r-l)/2;
            if (nums[m] >= nums[l]) {
                res = min(res, nums[l]);
                l = m + 1;
            } else {
                res = min(res, nums[m]);
                r = m - 1;
            }

        }
        return res;
    }
};
