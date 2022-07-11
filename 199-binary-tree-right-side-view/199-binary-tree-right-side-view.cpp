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
      
      vector<vector<int>>ans;
      if(root==NULL)
        return {};
      queue<TreeNode*>q;
      q.push(root);
      
      while(!q.empty())
      {
        vector<int>level;
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
          TreeNode *node=q.front();
          q.pop();
          if(node->left !=NULL)
            q.push(node->left);
          if(node->right !=NULL)
            q.push(node->right);
          level.push_back(node->val); 
        }
        ans.push_back(level);
      }
      vector<int>res;
      for(int i=0;i<ans.size();i++)
      {
        int sz=ans[i].size();
        res.push_back(ans[i][sz-1]);
      }
      return res;
    }
};