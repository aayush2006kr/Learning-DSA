/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>res;
    void fun(TreeNode* root , int target , int sum , vector<int>&diary){
        if(root == NULL) return ;
        diary.push_back(root->val);
        sum = sum + root->val;
        if(root->right == NULL && root->left == NULL){
            if(sum == target){
                res.push_back(diary);
                diary.pop_back();
                return ;
            }
        }

        fun(root->left , target , sum , diary );
         fun(root->right , target , sum , diary );
         diary.pop_back();
         return;
        

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>diary;
        fun(root , targetSum , 0 , diary);
        return res;
    }
};