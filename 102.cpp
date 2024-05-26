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
    #include<queue>
    vector<vector<int>> finalans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL) return finalans;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            vector<int> currentLevel;
            TreeNode* temp = q.front();
            q.pop();
            if(temp){
                currentLevel.push_back(root->val);
                if(temp -> left) q.push(root->left);
                if(temp -> right) q.push(root->right);
            }
            else{
                finalans.push_back(currentLevel);
                currentLevel.clear();
                if(!q.empty()){
                    q.push(nullptr);
                }
            }
        }
        return finalans;
    }
};sq