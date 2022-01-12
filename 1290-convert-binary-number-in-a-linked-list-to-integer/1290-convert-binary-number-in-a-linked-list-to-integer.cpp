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
    
    
    int getDecimalValue(ListNode* head) {
        
        if(head==nullptr)
        {
            return 0;
        }
        int ans=0;
        int len=length(head);
        ListNode* temp=head;
        //cout<<len<<" ";
        while(temp!=nullptr)
        {
            int bd=pow(2,(len-1))*temp->val;
            //cout<<bd<<" ";
            ans+=bd;   //2^2*1+2^1*0+2^0*1
            //cout<<ans<<" ";
            temp=temp->next;
            len--;
        }
        return ans;
    }
};