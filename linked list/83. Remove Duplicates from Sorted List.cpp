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
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode *temp,*cur,*prev;
        temp = new ListNode(-200);
        temp->next=head;
        
        // -200 -> 1 -> 1->2->3->3->NULL
        prev = temp;
        cur = head;
        while(cur)
        {
            if(cur->val == prev->val)
                prev->next = cur->next;
            else
                prev = cur;
            
            cur=cur->next;
        }
                
        return head;
    }
};