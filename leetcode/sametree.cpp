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
    vector<int> traverseTree(TreeNode* p, vector<int> nodes) {
        if (p != NULL) {
            nodes.push_back(p->val);
        } else {
            return nodes;
        }
        if (p->left != NULL) {
            nodes.push_back(p->val);
        } else {
            nodes.push_back(-10001);
        }
        if (p->right != NULL) {
            nodes.push_back(p->val);
        }
        nodes = traverseTree(p->left, nodes);
        return traverseTree(p->right, nodes);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pv, qv;
        pv = traverseTree(p, pv);
        qv = traverseTree(q, qv);
        if (pv.size() != qv.size()) {
            return false;
        } else {
            bool isSame = true;
            for(int i = 0; i < pv.size(); i++) {
                if (pv[i] != qv[i]) {
                    isSame = false;
                    break;
                }
            }
            return isSame;
        }
    }
};

