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
    
    bool isPalindrome(ListNode* head) {
     ListNode* temp=head;
        int length = 0;
        while(temp!=NULL)
        {
            length ++;
            temp=temp->next;
        }
        // cout<<length;
        int arr[length];
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            arr[i++] = temp->val;
            temp=temp->next;
        }
        Solution ob;
        head = ob.reverseList(head);
        
        // now just check the array n list
        temp = head;
        i=0;
        while(temp!=NULL)
        {
            if(arr[i++] != temp->val)
                return false;
            temp=temp->next;
        }
        return true;
    }
};