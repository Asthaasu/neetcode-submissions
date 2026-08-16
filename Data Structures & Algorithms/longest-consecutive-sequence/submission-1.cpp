class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((nums[i] - nums[j] == 1)){
                    count++;
                }
            }
        }
        return count;
    }
};
