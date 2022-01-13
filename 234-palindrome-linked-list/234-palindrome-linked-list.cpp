/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        stack<int>ans;
    ListNode* temp=head;
        while(temp!=nullptr)
        {
            ans.push(temp->val);
            temp=temp->next;
        }
       // ans.push(temp->val);
         ListNode* tem=head;
        
        while(!ans.empty()&& tem!=nullptr)
        {
          if(ans.top()!=tem->val)
          {
              return false;
          }
            ans.pop();
            tem=tem->next;
        }
        return true;
    }
};