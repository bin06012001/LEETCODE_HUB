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
    void rec(TreeNode* temp,vector<int>&vec)
    {
        if(temp==NULL)
            return;
        
        vec.push_back(temp->val);
        
        rec(temp->right,vec);
        rec(temp->left,vec);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        TreeNode* temp=root;
        vector<int> vec;
        
        rec(root,vec);
        
        for(int i=0;i<vec.size();i++)
        {
            for(int j=0;j<vec.size();j++)
            {
                if(vec[i]+vec[j]==k&&i!=j)
                    return true;
            }
        }
        return false;
    }
};