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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        
        ListNode*temp=head;
        if(head->next==NULL||head->next==NULL)return true;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow=reverse(slow->next);
        bool ispalin=true;
        while(slow!=NULL)
        { if(slow->val!=temp->val)
        {
            return false;
        }
         slow=slow->next;
            temp=temp->next;
        }
        return true;
        
        
    }
   ListNode* reverse(ListNode *head)
    {
        ListNode *newNode=NULL;
        while(head!=NULL)
        {
            ListNode *next=head->next;
            head->next=newNode;
            newNode=head;
            head=next;
        }
        return newNode;
    }
};