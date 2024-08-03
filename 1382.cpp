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
private: 
    void createArray(vector<int>&ans, TreeNode* root){
        if(root != NULL){
            createArray(ans,root->left);
            ans.push_back(root -> val);
            createArray(ans,root -> right);
        
        }
    }
    TreeNode* function(vector<int>& ans, int start, int end){
        int mid = end + (start - end)/ 2;
        if(start > end){
            return NULL;
        }
        TreeNode* node = new TreeNode(ans[mid]);
        node -> left = function(ans,start, mid - 1);
        node -> right = function(ans,mid + 1, end);
        return node;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        createArray(ans, root);
        if(root != NULL){
            return function(ans, 0, ans.size() - 1);
        }
        else{
            return NULL;
        }
    }
};