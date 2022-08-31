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
    
    bool sum(TreeNode* root,int ts,int s)
    {
        if(root==NULL)
            return false;
        
        if(root->left==NULL&&root->right==NULL)
        {
            if(ts==(s+root->val))
                return true;
            
            return false;
        }
        
        int ls=sum(root->left,ts,s+root->val);
        int rs=sum(root->right,ts,s+root->val);
        
        
        return ls or rs;
        
        
        
    }
    
    
    bool hasPathSum(TreeNode* root, int ts) {
        
        
        return sum(root,ts,0);
        
    }
};