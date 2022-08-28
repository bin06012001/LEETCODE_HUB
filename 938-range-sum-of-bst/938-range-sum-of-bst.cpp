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
    
    void sum(TreeNode* root,int &ans,int l,int h)
    {
        if(root==NULL)
            return;
        
        if(root->val>=l&&root->val<=h)
        {ans+=root->val;}
        
        sum(root->left,ans,l,h);
        sum(root->right,ans,l,h);
    }
    
    
    int rangeSumBST(TreeNode* root, int l, int h) {
        
        int ans=0;
        sum(root,ans,l,h);
        
        return ans;
    }
};