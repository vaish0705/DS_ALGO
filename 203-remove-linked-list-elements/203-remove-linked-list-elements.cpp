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
    ListNode* removeElements(ListNode* head, int val) {
        
       if(head==nullptr)
       {
           return nullptr;
       }
        /*
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* tail=dummy;
        
        while(tail!=nullptr &&tail->next!=nullptr)
        {
            if(tail->next->val==val)
            {
                ListNode* temp=tail->next;
                tail-> next=tail->next->next;
                delete temp;
            }
            else{
                tail=tail->next;
            }
                
        }
        
        return dummy->next;*/
        
        
        
        
        
        
        ListNode* new_head=removeElements(head->next,val);
        if(head->val==val)
        {
            delete head;
            return new_head;
        }
        else
        {
            head->next=new_head;
        }
        return head;
        
        
        
        
        
        
        
        
        
        
        
    }
};