/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    
    
    
    //1st approach
    //put a pointer ptr1 at a1 and ptr2 at b1  and chk whthr both are intersecting or not 
    //keep moving ptr1 till the end and keep chking whethr both pointers meet or not
    //now move ptr2 and continue same process (1-3steps)with ptr1 
    //o(m*n)
    
    
    //2nd approach 
    //calculate length of both the linked list
    //calculte the diffrnce, diff=length1-length2
    //move the pointer  of longer list by diff steps
    //now ptr1 and ptr2 are at same level
    //move both pointers together by 1 step
    // nd chk whtr they are equal or not
    
    
    //3rd approach
    //common part of oth list=x
    //len of 1st list apart from common part=m
    //len of 2nd list apart from common part=n
    //let ask ptr1 to travel list1 as well as list2=m+x+n+x
    //let ask ptr2 to travel list2 as well as list1=n+x+m+x
    //during this traversal oth pointer will meet at point
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        
        

        
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        
        while(ptr1!=ptr2)
        {
            
            if(ptr1==nullptr)
            {
                ptr1=headB;
                
            }
            else
            {
                ptr1=ptr1->next;
            }
            if(ptr2==nullptr)
            {
                ptr2=headA;
                
            }
             else
            {
                ptr2=ptr2->next;
            }
            
        }
        
        return ptr1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};