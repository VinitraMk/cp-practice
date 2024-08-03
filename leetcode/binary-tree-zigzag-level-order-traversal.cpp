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
    vector<int> addElements(vector<int> nodes, int level, int el) {
        if (level % 2 == 0) {
            nodes.push_back(el);
        } else {
            nodes.insert(nodes.begin(), el);
        }
        return nodes;
    }
    vector<vector<int>> bfs(TreeNode* root, int level, vector<vector<int>> visited) {
        if (root == NULL) {
            return visited;
        }
        queue<TreeNode*> toCheck;
        toCheck.push(root);
        while(!toCheck.empty()) {
            int qs = toCheck.size();
            for(int i = 0; i < qs; i++) {
                TreeNode* el = toCheck.front();
                toCheck.pop();
                if (el != NULL) {
                    if (visited.size() == level) {
                        vector<int> temp;
                        temp = addElements(temp, level, el->val);
                        visited.push_back(temp);
                    } else {
                        visited[level] = addElements(visited[level], level, el->val);
                    }
                }
                if (el->left) toCheck.push(el->left);
                if (el->right) toCheck.push(el->right);
            }
            level++;
        }
        return visited;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> visited;
        if (root != NULL) {
            return bfs(root, 0, visited);
        }
        return visited;
    }
};


