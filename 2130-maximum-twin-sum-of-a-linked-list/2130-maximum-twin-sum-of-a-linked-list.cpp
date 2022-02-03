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
    int pairSum(ListNode* head) {
        
        vector<int>ll;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            ll.push_back(temp->val);
            temp=temp->next;
        }
        
        int n=ll.size();
        int i=0;
        int j=n-1;
        int ans=INT_MIN;
        
        while(i<j)
        {
            
            int sum=ll[i]+ll[j];
            i++;j--;    
            
        ans=max(ans,sum);    
            
        }
        
        return ans;
    }
};