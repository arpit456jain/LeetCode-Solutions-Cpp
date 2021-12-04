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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
    ListNode* head = new ListNode(-1);
    ListNode* dummy = head;
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<temp2->val)
            {
                ListNode* nextnode = new ListNode(temp1->val);
                dummy->next = nextnode;
                temp1 = temp1->next;
                cout<<dummy->val;
            }
            else
            {
                ListNode* nextnode = new ListNode(temp2->val);
                dummy->next = nextnode;
                temp2 = temp2->next;
                cout<<dummy->val;
            }
            dummy=dummy->next;
        }
        if(temp1!=NULL)
            dummy->next = temp1;
        if(temp2!=NULL)
            dummy->next = temp2;
        
        return head->next;
    }
};