class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            int buy = prices[i];
            for(int j=i+1;j<n;j++){
                int sell = prices[j];
                res = max(res, sell - buy);
            }
        }
        return res;
    }
};
