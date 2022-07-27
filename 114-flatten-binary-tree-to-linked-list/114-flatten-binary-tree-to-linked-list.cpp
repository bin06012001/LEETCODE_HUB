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
    void flatten(TreeNode* root) {
        
        while (root != NULL) {
            if (root->left != NULL) {
                TreeNode* k = root->left;
                TreeNode* temp = root->left;
                while (k->right != NULL) k = k->right;
                k->right = root->right;
                root->right = temp;
                root->left = NULL;
            }
            root = root->right;
        }
        
    }
};