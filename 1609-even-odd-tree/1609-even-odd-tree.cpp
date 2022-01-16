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
    bool isEvenOddTree(TreeNode* root) {
        
       /* bool flag=true;
        
        if(root==nullptr)
        {
            return true;
        }
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        bool leftoright=true;
        q.push(root);
        while(!q.empty())
        {
              
            int n=q.size();
            vector<int>level(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                int indx=leftoright?i:n-i-1;
                
                level[indx]=f->val;
                
                if(f->left)
                {
                    q.push(f->left);
                }
              
    
                if(f->right)
                {
                    q.push(f->right);
                }
                    
            }
           if(leftoright==true)
            {
                for(int i=0;i<level.size()-1;i++)
                {
                    if(level[i]>=level[i+1])
                    {
                        return false;
                    }
                    if(level[i]%2==0)
                    {
                        return false;
                    }
                }
                if(level[level.size()-1]%2==0)
                 return false;
            }
            else
            {//4 10
                //10 4
                
                //5 4 2 3 3 7
                //5
                //4 2
                //3 2 7
                
                for(int i=0;i<level.size()-1;i++)
                {
                    if(level[i]>=level[i+1]) 
                    {
                        return false;
                    }
                    if (level[i]%2!=0)
                    {
                        return false;
                    }
                }
                 if(level[level.size()-1]%2!=0)
                 return false;
                
            }
            
              leftoright=!leftoright;
            ans.push_back(level);
        }
        //5
        //1 9
        
        
        
        
        return true;*/
        
        
        
        
        queue <TreeNode*> q;
        q.push(root); int l=0;
        while(!q.empty()){
            int n=q.size();
            vector <int> lvl;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front(); q.pop();
                lvl.push_back(t->val);
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
            if(l%2==0){
                for(int i=0;i<lvl.size()-1;i++){
                    if(lvl[i]>=lvl[i+1] || lvl[i]%2==0)
                       {return false;}    
                }
                 if(lvl[lvl.size()-1]%2==0)
                 return false;
            }
            else{
                for(int i=0;i<lvl.size()-1;i++){
                    if(lvl[i+1]>=lvl[i] || lvl[i]%2!=0 ){return false;}
                }
                 if(lvl[lvl.size()-1]%2!=0)
                 return false;
            }
            l++;     
        }
    return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};