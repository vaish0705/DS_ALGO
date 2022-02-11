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
    int getDecimalValue(ListNode* head) {
        
        int n=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
           temp=temp->next;
            n++;

        }
                ListNode* tem=head;
        
        int ans=0;
         
        if(head==nullptr)
        {
            return 0;
        }
        while(tem!=nullptr)
        { 
             int value=tem->val*(pow(2,n-1));
            ans+=value;
            n--;
            tem=tem->next;

            
        }
        
        
        return ans;
      
    }
};