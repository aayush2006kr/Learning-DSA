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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL){
            int r = minDepth(root->right);
            return 1+r ;
        }
         if(root->right == NULL){
            int l= minDepth(root->left);
            return 1+l ;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return (1+min(left,right));
    }
};