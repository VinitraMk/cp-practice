class Solution {
public:
    int getMinimumDepth(TreeNode* root, int depth, int minDepth) {
        if (root != NULL) {
            depth++;
        } else {
            if (depth < minDepth) {
                minDepth = depth;
            }
            return minDepth;
        }
        int minDepthRight, minDepthLeft = minDepth;
        if (root->left == NULL) return getMinimumDepth(root->right, depth, minDepthRight);
        if (root->right == NULL) return getMinimumDepth(root->left, depth, minDepthLeft);
        if (root->left && root->right) {
            return min(getMinimumDepth(root->left, depth, minDepthLeft), getMinimumDepth(root->right, depth, 
                minDepthRight));
        } else {
            return 0;
        }
    }
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return getMinimumDepth(root, 0, 9999);
    }
};
