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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_map<int,bool> hasParent;
        for(auto desc: descriptions){
            int parentVal = desc[0];
            int childVal = desc[1];
            TreeNode* parent = NULL;
            TreeNode* child = NULL;

            if(mp.find(parentVal) == mp.end()) parent = new TreeNode(parentVal);
            else parent = mp[parentVal];

            if(mp.find(childVal) == mp.end()) child = new TreeNode(childVal);
            else child = mp[childVal];

            if(desc[2]) parent -> left = child;
            else parent -> right = child;

            hasParent[childVal] = true;
            mp[childVal] = child;
            mp[parentVal] = parent;
        }
        TreeNode* root = NULL;
        for(auto [nodeVal, node] : mp){
            if(!hasParent[nodeVal]) root = node;
        }
        return root;
    }
};