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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>answer;
          if(root==nullptr)
          {
                  return answer;
          }
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty())
         {
                 int n=q.size();
                 vector<int>level(n);
                 for(int i=0;i<n;i++)
                 {
                         TreeNode* f=q.front();
                         q.pop();
                         
                         level[i]=f->val;
                         if(f->left)
                         {
                                 q.push(f->left);
                         }
                         
                         if(f->right)
                         {
                                 q.push(f->right);
                         }
  
                 }
                 
                 answer.push_back(level);
         }
        
        
        
        return answer;
        
        
        
        
    }
};