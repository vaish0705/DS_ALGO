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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL ||head->next==NULL)                 
                                                            
        {
            return head;
        }
     /* 
     //recursive
      ListNode* rechead =  deleteDuplicates(head->next); //RECURSION  SE HEAD->NEXT SE LEKR LIST KE END TK MEI SE DUPLICATE REMOVE KRYENGE
        if(head->val==rechead->val)   //JO RECURSION NE DUPLICATE REMOVE KRKE JO LIST DI  H  USKE HEAD AND ORIGINAL HEAD KI VALUE  DONO EQUAL HAI
        {
            return rechead;         //TO HUM ORIGINAL HEAD KO CONSIDER NHI KRENGE VRNA DUPLICATES AJYENGE
        }
        else
        {    
            
        head->next=rechead;          //agar equal nhi h dono ki value to hume  original head ko aur recursion vali list vale head ko connct krna hoga
        return head;
        }
        
        */
        //iterative
        ListNode* temp=head;
        while(temp->next!=nullptr)
        {
            if(temp->val==temp->next->val)    
            {
                ListNode* temp_ki_next=temp->next;
                temp->next=temp_ki_next->next;       //1 1 1
                delete temp_ki_next;
            }
            
            else
            {
               temp= temp->next;
            }
            
            
            
            
            
        }
        return head;
    }
};