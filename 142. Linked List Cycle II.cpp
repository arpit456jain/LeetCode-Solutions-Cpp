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
        ListNode* faster;
        ListNode* slower;
        slower = head;
        faster = head;
        if (head == NULL)
            return NULL;
        if(head->next == NULL)
            return NULL;
        while(faster!=NULL && slower!=NULL && faster->next!=NULL && slower->next!=NULL)
        {
            faster=faster->next->next;
            slower = slower->next;
            if(faster == slower)
            break;
            
        }
        if(slower == head)
        {
            while(faster->next!=slower)
            faster = faster->next;
            // faster->next = NULL;
            return faster->next;
        }
        else if(slower == faster)
        {
            slower = head;
            while(slower->next!=faster->next)
            {
                slower = slower->next;
                faster = faster->next;
            }
            // faster->next = NULL;
            return faster->next;;
        }
        else
            return NULL;
        
        return head;
    }
};