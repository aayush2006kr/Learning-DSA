class Solution {
public:
    void fun(vector<int>& a, int idx,
             vector<vector<int>>& res) {

        // Base case
        if (idx == a.size()) {
            res.push_back(a);
            return;
        }

        for (int i = idx; i < a.size(); i++) {

            // Choose: swap
            swap(a[idx], a[i]);

            // Recursive call
            fun(a, idx + 1, res);

            // Backtrack: undo swap
            swap(a[idx], a[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        fun(nums, 0, res);
        return res;
    }
};