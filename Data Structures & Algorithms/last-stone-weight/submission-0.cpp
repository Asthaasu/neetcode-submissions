class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int cur = stones.back() - stones[stones.size() - 2];
            stones.pop_back();
            stones.pop_back();
            if (cur != 0) {
                stones.push_back(cur);
            }
        }
        return stones.empty() ? 0 : stones[0];
    }
};