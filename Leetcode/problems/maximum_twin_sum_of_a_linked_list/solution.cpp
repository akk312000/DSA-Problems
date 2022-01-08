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
        vector<int>vp;
        while(head!=NULL)
        {
            vp.push_back(head->val);
            head=head->next;
        }
       
        int i=0,j=vp.size()-1;
        int ans=INT_MIN;
        while(i<j)
        {
            
            ans=max(ans,vp[i]+vp[j]);
            i++;j--;
        }
        return ans;
    }
};