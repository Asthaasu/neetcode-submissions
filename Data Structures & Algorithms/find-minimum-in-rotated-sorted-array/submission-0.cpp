class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = nums[0];
        int r = nums.size()-1;
        int l=0;
        while(l<r){
            int m = l + (r - l) / 2;
            res = min(res, nums[m]);
            if (nums[m] >= nums[l]) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return res;
    }
};
