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
    
    int length(ListNode*head)
    {
         if(head==nullptr)
         {
             return 0;
         }
        
    ListNode* temp=head;
        int len=0;
        while(temp!=nullptr)
        {
           len++;
            temp=temp->next;
        }
        return len;
        
        
    }
    ListNode* middleNode(ListNode* head) {
     
      /*  ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)   
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;*/
        
        
        ListNode* temp=head;
        int ans=length(head);
        int half=ans/2;
        while(half>0)
        {
            temp=temp->next;
            half--;
        }
        
        
        return temp;
        
        
        
        
        
        
        
        
    }
};