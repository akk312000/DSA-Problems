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
        vector<int>vp;
        ListNode*temp=head;
        while(temp)
        {
            vp.push_back(temp->val);
            temp=temp->next;
        }
        bool ispalin=true;
        
        int n=vp.size();
        
        for(int i=0;i<n/2;i++)
        {
            if(vp[i]!=vp[n-i-1])
            {
                ispalin=false;break;
            }
        }
        if(ispalin)
        {
          return true;  
        }
        return false;
    }
};