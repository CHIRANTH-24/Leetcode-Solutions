class Solution {
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        unordered_map<int, int> postIndex;
        for (int i = 0; i < postorder.size(); i++) {
            postIndex[postorder[i]] = i;
        }
        int preIndex = 0;
        return buildTree(preorder, postorder, preIndex, 0, postorder.size() - 1, postIndex);
    }

private:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& postorder, int& preIndex, 
                        int postStart, int postEnd, unordered_map<int, int>& postIndex) {
        if (preIndex >= preorder.size() || postStart > postEnd) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[preIndex++]);

        if (preIndex >= preorder.size() || postStart == postEnd) {
            return root;
        }

        int leftChild = preorder[preIndex];
        int leftSubtreeSize = postIndex[leftChild] - postStart + 1;

        root->left = buildTree(preorder, postorder, preIndex, postStart, postIndex[leftChild], postIndex);
        root->right = buildTree(preorder, postorder, preIndex, postIndex[leftChild] + 1, postEnd - 1, postIndex);

        return root;
    }
};
