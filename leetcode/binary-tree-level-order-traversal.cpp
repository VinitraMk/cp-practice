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
    vector<vector<int>> bfs(TreeNode* root, int level, vector<vector<int>> visited, vector<int> 
    children) {
        if (root == NULL) {
            return visited;
        }
        queue<TreeNode*> toCheck;
        if (root->left) {
            toCheck.push(root->left);
        }
        if (root->right) {
            toCheck.push(root->right);
        }
        while(!toCheck.empty()) {
            TreeNode* el = toCheck.front();
            toCheck.pop();
            if (el != NULL) {
                if (visited.size() == level) {
                    vector<int> temp;
                    temp.push_back(el->val);
                    visited.push_back(temp);
                } else if (visited.size() > level) {
                    visited[level].push_back(el->val);
                }
            }
        }
        visited = bfs(root->left, level+1, visited, children);
        visited = bfs(root->right, level+1, visited, children);
        return visited;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> toCheck;
        vector<vector<int>> visited;
        vector<int> children;
        if (root != NULL) {
            children.push_back(root->val);
            visited.push_back(children);
            return bfs(root, 1, visited, children);
        }
        return visited;
    }
};

