class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =nums[0];
        int n = nums.size();
        int i=1;
        while(i < n){
            ans = ans ^nums[i];
            i++;
        }
        return ans;
    }
};
