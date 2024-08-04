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
    int getMaxDepth(TreeNode* root, int depth, int maxDepth) {
        if (root == NULL) {
            return max(depth, maxDepth);
        } else {
            depth++;
        }
        if (root->left == NULL) {
            return getMaxDepth(root->right, depth, maxDepth);
        } else if (root->right == NULL) {
            return getMaxDepth(root->left, depth, maxDepth);
        } else {
            return max(getMaxDepth(root->left, depth, maxDepth), getMaxDepth(root->right, depth, maxDepth));
        }
    }
    
    int maxDepth(TreeNode* root) {
        return getMaxDepth(root, 0, -999);
    }
};


