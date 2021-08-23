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
    ListNode *detectCycle(ListNode *head) {
        
        
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*dummy=head;
        if(head==NULL||head->next==NULL)
        {
            return NULL;
        }
        bool found=false;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
           
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast)
            {
                found=true;
                break;
            }
        }
        if(found==false)
        {
            return NULL;
        }
        int count=0;
        while(dummy!=slow)
        {count++;
            dummy=dummy->next;
            slow=slow->next;
        }
        cout<<count<<endl;
        return dummy;
        
        
        
        
        
    }
};