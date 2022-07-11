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
    vector<int> rightSideView(TreeNode* root) {
         if(!root) {
            return {};
        }
        vector<int> v; //store values of nodes in the rightmost
        queue<TreeNode*> Q; //store node type values in queue 
        Q.push(root); //push root
        while(!Q.empty()) { //repeat steps until queue is not empty
            
            int size = Q.size();  // current size of queue
            for(int i = 0; i < size; i++) {
              TreeNode* t = Q.front(); //declare a temp node and put front node of queue
                Q.pop(); 
                if(i==size-1) {   //if node is rightmost 
                    v.push_back(t->val); //push the value of rightmost node into vector
                }
                if(t->left) {   //if temp->left != NULL then push into queue
                    Q.push(t->left);
                }
                if(t->right) { //if temp->right != NULL then push into queue
                    Q.push(t->right);
                }
            }  
        }
        return v;
    }
};