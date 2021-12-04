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
    void deleteNode(ListNode* node) {
        // swap the value and delete the next node
        ListNode* temp = node->next;
        int data = node->val;
        node->val = temp->val;
        temp->val = data;
        
        node->next = temp->next;
    }
};