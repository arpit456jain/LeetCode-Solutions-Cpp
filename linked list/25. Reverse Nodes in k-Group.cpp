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
    int getlength(ListNode* head)
    {
        ListNode* temp;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode  *cur , *prev , *next;
        cur = head;
        next = NULL;
        prev = NULL;
        int count = 0;
        int remaininglength = getlength(head);
        if(remaininglength<k)
            return head;
        while(cur!=NULL && count<k)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            count++;
        }
        
      if(cur!=NULL)
        head->next = reverseKGroup(cur,k);
        
    return prev;
    }
};