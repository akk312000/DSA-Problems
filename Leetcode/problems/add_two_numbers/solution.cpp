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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL;
        ListNode*tail=NULL;
        int carry=0;
        while(l1&&l2)
        {
            int sum=l1->val+l2->val+carry;
            if(sum>=10)carry=1;
            else carry=0;
            ListNode*temp=new ListNode(sum%10);
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                
//                  temp->val=sum;
            
//                 head->next=temp;
               
//                 tail=temp;
                
                
            }
            else
            {
               tail->next=temp;
                tail=tail->next;
            }
            l1=l1->next;l2=l2->next;
            
        }
         while(l1)
        {
            int sum=l1->val+carry;
            if(sum>=10)carry=1;
            else carry=0;
            ListNode*temp=new ListNode(sum%10);
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                
//                  temp->val=sum;
            
//                 head->next=temp;
               
//                 tail=temp;
                
                
            }
            else
            {
               tail->next=temp;
                tail=tail->next;
            }
            l1=l1->next;
            
        }
         while(l2)
        {
            int sum=l2->val+carry;
            if(sum>=10)carry=1;
            else carry=0;
            ListNode*temp=new ListNode(sum%10);
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                
//                  temp->val=sum;
            
//                 head->next=temp;
               
//                 tail=temp;
                
                
            }
            else
            {
               tail->next=temp;
                tail=tail->next;
            }
          l2=l2->next;
            
        }
        if(carry)
        {
            ListNode *temp=new ListNode(1);
            tail->next=temp;
            tail=tail->next;
        }
        return head;
        
    }
};