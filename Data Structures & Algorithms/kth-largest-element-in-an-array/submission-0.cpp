class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        if(k>=0){
            return nums[n-k];
        }
        else{
            return 0;
        }
    }
};
