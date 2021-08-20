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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len=findlen(head);
        int diff=len-n;
        if(diff==0)
        {
            return head->next;
        }
        int counter=1;
        ListNode*temp=head;
        while(temp->next!=NULL)
        {
            if(counter==diff)
            {
                break;
            }
            temp=temp->next;
            counter++;
        }
        ListNode*node=temp->next;
        temp->next=temp->next->next;
        delete(node);
        return head;
    }
    
    int findlen(ListNode *head)
    {
        int count=0;
        while(head!=NULL)
        {
            head=head->next;
            count++;
        }
        return count;
    }
};