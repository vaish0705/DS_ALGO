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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>answer;
            if(root==nullptr)
            {
                    return answer;
            }
            queue<TreeNode*>q;
            q.push(root);
            bool leftoright=true;
            while(!q.empty())
            {
                    int n=q.size();
                    vector<int>level(n);
                    for(int i=0;i<n;i++)
                    {
                        TreeNode*  f=q.front();
                            q.pop();
                            int index=leftoright?i:(n-i-1);
                            
                            level[index]=f->val;
                            
                            if(f->left)
                            {
                                    q.push(f->left);
                            }
                            if(f->right)
                            {
                                    q.push(f->right);
                            }
                            
                            
                    }
                    leftoright=!leftoright;
                    answer.push_back(level);
                    
                    
                    
            }
            return answer;
         /*   vector<vector<int>> result;
        if (root == NULL) {
            return result;
        }

        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while ( !nodesQueue.empty()) {
            int size = nodesQueue.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++) {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                // find position to fill node's value
                int index = (leftToRight) ? i : (size - 1 - i);

                row[index] = node->val;
                if (node->left) {
                    nodesQueue.push(node->left);
                }
                if (node->right) {
                    nodesQueue.push(node->right);
                }
            }
            // after this level
            leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;*/
    }
};