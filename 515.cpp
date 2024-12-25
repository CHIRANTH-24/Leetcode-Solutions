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
    map<int, int> maxInRow; 

    void dfs(TreeNode* node, int level) {
        if (!node) return; 
        if (maxInRow.find(level) != maxInRow.end()) {
            maxInRow[level] = max(maxInRow[level], node->val);
        } else {
            maxInRow[level] = node->val;
        }
        dfs(node->left, level + 1);
        dfs(node->right, level + 1);
    }

    vector<int> largestValues(TreeNode* root) {
        dfs(root, 0); 
        vector<int> result(maxInRow.size());
        for (auto& pair : maxInRow) {
            result[pair.first] = pair.second;
        }
        return result;
    }
};