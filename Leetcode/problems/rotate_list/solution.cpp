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
    ListNode* rotateRight(ListNode* head, int k) {
      
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
    
        k=k%len;
        if(k==0)return head;
        k=(len-k);
        ListNode*temp2=head;
        for(int i=0;i<k-1;i++)
        {
            temp2=temp2->next;
            
        }
        ListNode*ans=temp2->next;
        ListNode*ans2=ans;
        temp2->next=NULL;
        while(ans2->next!=NULL)
        {
            ans2=ans2->next;
        }
        ans2->next=head;
        return ans;
        
    }
};