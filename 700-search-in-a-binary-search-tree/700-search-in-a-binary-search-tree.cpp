/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : value(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : value(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
       
        //base case  
        //if root of the tree is pointing to null we dont need to find the value 
        //just return null
       /* if(root==nullptr)
        {
            return NULL;
        }
        
        
        //if root value is greater thn the val
        //than we need to search in the left subtree  only
        //bcz value on the right part will be greater thn the root value so there is no point of searching in  right subtree
        
       else if(val<root->val)
        {
           return  searchBST(root->left,val);
        }
        
        
        //if root value is lesser thn the val
        //than we need to search in the right subtree  only
        //bcz value on the left part will be lesser thn the root value so there is no point of searching in  left subtree  
        
        else if(val>root->val)
        {
            return searchBST(root->right,val);
        }
        
        
        //if we given valexist in the tree  thn return the subtree rooted with that node.
        //If such a node does not exist, return null
        return root;*/
        
        
    
        while(root!=nullptr && root->val!=val)
        {
           root= root->val>val?root->left:root->right;
        }
        
        
        
        return root;
        
        
        
        
        
        
        
        
        
        
    }
};