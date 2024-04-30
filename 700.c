/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(root == NULL){
        return root;
    }
    if(root -> val == val){
        return root;
    }
    else if(root -> val < val){
         root =  searchBST(root->right,val);
    }
    else{
        root =  searchBST(root->left,val);
    }
    return root;
}