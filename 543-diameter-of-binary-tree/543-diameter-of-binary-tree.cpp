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
     int depth(TreeNode*root)
{
	if(root==NULL)
	{
     return 0;
	}
  int lh=depth(root->left);
  int rh=depth(root->right);
   return max(lh,rh)+1;



}
    /*
    int height(TreeNode* root,int &d)
    { if(root==nullptr)
        {
            return 0;
        }
        
        int lh=height(root->left,d);
        int rh=height(root->right,d);
     d=max(d,lh+rh);
return max(lh,rh)+1;    }
*/
    
int diameterOfBinaryTree(TreeNode* root) {
       
   // int d=0;
    //height(root,d);
  if(root==nullptr)
  {
      return 0;
      
  }
    int h1=depth(root->left);
    int h2=depth(root->right);
    int op1=h1+h2;
    int op2=diameterOfBinaryTree( root->left);
    int op3=diameterOfBinaryTree(root->right);
    int d=max(op1,max(op2,op3));
    
    
    return d;
    
    
    }
};