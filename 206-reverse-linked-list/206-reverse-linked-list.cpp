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
    
    ListNode* reverse(ListNode* head)
    {
        if(head->next==nullptr)
        {
            return head;
        }
        
        
        ListNode* reversehead=reverse(head->next); //here i m asking recusrion to  reverse linkedlist from head->next to end  ,
        //and i will take care of head
        
        //1->2->3
        head->next->next=head;//now 1<--2  
        head->next=NULL;
            
            return reversehead;
        
        
        
    }    
    
    
    
    
    
    ListNode* reverseList(ListNode* head) {
        
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        
        ListNode* n;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
        n=curr->next;
        curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
        return head;
    }
};