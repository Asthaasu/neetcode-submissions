class Solution {
public:
    int rob(vector<int>& nums) {
        return dfs(nums, 0);
    }

    int dfs(vector<int>& nums, int i) {
        if (i >= nums.size()) {
            return 0;
        }
        return max(dfs(nums, i + 1),
                   nums[i] + dfs(nums, i + 2));
    }
};