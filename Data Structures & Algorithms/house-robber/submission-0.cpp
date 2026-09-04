class Solution {
public:
    int rob(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i=i+2){
            sum += nums[i];
        }
        return sum;
    }
};
