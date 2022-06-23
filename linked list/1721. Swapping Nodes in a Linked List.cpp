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
     
    ListNode* swapNodes(ListNode* head, int k) {
     // login is to find kth node from first
    // kth node from last = n-k+1 from start
        int length =0 ;
        if (head == NULL or head->next == NULL)
            return head;
        ListNode *temp= head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        int first = k-1;
        temp = head;
        while(temp!=NULL and first>0)
        {
            temp=temp->next;
            first--;
        }
        
        
        
        int last = length - k;
        ListNode *temp2 = head;
        while(temp!=NULL and last>0)
        {
            temp2=temp2->next;
            last--;
        }
        
        //swap
        int d = temp->val;
        temp->val = temp2->val;
        temp2->val = d;
        return head;
    }
};