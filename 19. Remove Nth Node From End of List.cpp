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
    ListNode* reverseList(ListNode* head) {
        ListNode *curr , *next, *prev;
        prev = NULL;
        curr = head;
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
                
        }
        
        return prev;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length =0 ;
        ListNode *temp= head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        // cout<<length;
        
        Solution ob;
        head =     ob.reverseList(head);
        // now the question is to delete the elemtnt from first
        if(length==0)
            return NULL;
        if(length == 1)
            return NULL;
        temp=head;
        ListNode *prev = head;
        if(n==1)
            head=head->next;
        n=n-2;
        while(n>0 && temp->next!=NULL)
        {
            prev = temp;
            temp=temp->next;
            n--;
        }
        temp->next = temp->next->next;
        
        head =     ob.reverseList(head);
        return head;
    }
};