// Problem: https://leetcode.com/problems/merge-two-binary-trees/

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // The fact that we don't have to create a new tree makes this really easy.
        if (root1 != NULL && root2 != NULL) {
            root1 -> val = root1 -> val + root2 -> val;
            root1 -> left = mergeTrees(root1 -> left, root2 -> left);
            root1 -> right = mergeTrees(root1 -> right, root2 -> right);
            return root1;
        } else if (root1 == NULL) {
            return root2;
        } else if (root2 == NULL) {
            return root1;
        } else {
            return NULL;
        }
    }
};