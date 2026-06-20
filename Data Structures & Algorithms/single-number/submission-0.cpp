class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size() - 1;
        int i = 0;
        while (i < n) {
            if (nums[i] == nums[i + 1]) {
                i += 2;
            } else {
                return nums[i];
            }
        }
        return nums[i];
    }
};
