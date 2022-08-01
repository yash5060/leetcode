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
  
  int solve(TreeNode *root,int &maxi)
  {
    if(root==NULL)
    {
      return 0;
    }
    int l=max(0,solve(root->left,maxi));
    int r=max(0,solve(root->right,maxi));
    
   
    maxi=max(maxi,root->val+l+r);
    
    return root->val+max(l,r);
    
  }
    int maxPathSum(TreeNode* root) {
      
      int r=root->val;
      
      
      int maxi=-9999;
      int x=solve(root,maxi);
      if(r>maxi)
      {
        return x;
      }
      return maxi;
        
    }
};