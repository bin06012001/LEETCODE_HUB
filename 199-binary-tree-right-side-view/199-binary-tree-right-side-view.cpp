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
    
    
    
    void right(TreeNode* root,vector<int>&vec,int level)
    {
        
        if(root==NULL)
            return;
        
        if(level==vec.size())
        {
            vec.push_back(root->val);
            //maxlevel=level;
        }
        
         right(root->right,vec,level+1);
         right(root->left,vec,level+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> vec;
        
        right(root,vec,0);
        
        return vec;
        
    }
    
    
   /* int maxlevel=0;
void rightView(TreeNode* root,vector<int>&v,int level){
if(root==NULL)return ;

    if(maxlevel<level){
        v.push_back(root->val);
        maxlevel = level;
    }
    rightView(root->right,v,level+1);
    rightView(root->left,v,level+1);
}
vector<int> rightSideView(TreeNode* root) {
    vector<int>v;
    
    rightView(root,v,1);
    
    return v;
}*/
};

//if(maxlevel<level){
  //      v.push_back(root->val);
    //    maxlevel = level;
    //}