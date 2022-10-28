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
    void rec(TreeNode* temp,vector<int> &vec)
    {
        if(temp==NULL)
            return;
        
        vec.push_back(temp->val);
        rec(temp->left,vec); rec(temp->right,vec);
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp=root;
        vector<int> vec;
        rec(temp,vec);
        sort(vec.begin(),vec.end());
        
        return vec[k-1];
        
        
    }
};