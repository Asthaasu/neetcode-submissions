class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res.clear();
        sort(candidates.begin(),candidates.end());
        vector<int> cur;
        backtrack(candidates,target,cur,0,0);
        return res;
    }
private:
    void backtrack(vector<int>& candidates, int target,vector<int>& cur,int i,int total){
        if (total == target) {
            res.push_back(cur);
            return;
        }
        if (total > target || i == candidates.size()) {
            return;
        }
        cur.push_back(candidates[i]);
        backtrack(candidates, target, cur, i+1,total + candidates[i]);
        cur.pop_back();

        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }
        backtrack(candidates, target, cur, i + 1, total);
    }
};
