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
    int getLength(ListNode* head)
    {
        ListNode* temp;
        temp=head;
        int count = 0;
        while(temp!=NULL)
        {
            count = count + 1;
            temp = temp->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int length;
        length = getLength(head)-1;
        ListNode* temp;
        temp=head;
        int num=0;
        while(temp!=NULL)
        {
            num = num + (temp->val)*pow(2,length);
            temp = temp->next;
            length--;
        }
        return num;
    }
};