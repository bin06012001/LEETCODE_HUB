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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return {};
        else
        {
            vector<string> lefty= binaryTreePaths(root->left);
            vector<string> righty= binaryTreePaths(root->right);
            vector<string> ans;
            string rooty=to_string(root->val);
            int l=lefty.size(), r=righty.size();
            if(l==0 and r==0) 
            {
                vector<string> v;
                v.push_back(rooty);
                return v;
            }
            for(int i=0;i<l;i++)
            {
                string s=rooty+"->"+lefty[i];
                ans.push_back(s);
            }
             for(int i=0;i<r;i++)
            {
                string s=rooty+"->"+righty[i];
                ans.push_back(s);
            }
        
            return ans;
        }
    }
};