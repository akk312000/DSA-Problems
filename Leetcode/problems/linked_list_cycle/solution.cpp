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
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
      ListNode *slow=head;
        ListNode *fast=head->next;
        
    bool iscycle=false;
        while(slow!=NULL&&fast!=NULL)
        {
            if(fast==slow)
            {
                iscycle=true;break;
            }
            slow=slow->next;
            if(fast->next==NULL||fast->next->next==NULL)
            {
                iscycle=false;break;
            }
            fast=fast->next->next;
        }
        if(iscycle)
        {
            return true;
        }
        return false;
    }
};