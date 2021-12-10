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
    
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
    
        // rverse both list
        Solution ob;
        first = ob.reverseList(first);
        second = ob.reverseList(second);
        int carry = 0;
        ListNode *temp1=first;
        ListNode *temp2=second;
        ListNode *head = new ListNode(-1);
        ListNode *curr = head;
        int sum1=0;
        while(temp1!=NULL && temp2!=NULL)
        {

            sum1 = temp1->val  + temp2->val + carry;
            
            if(sum1>=10)
            {
                sum1 = sum1%10;
                carry = 1;
            }
            else
            carry=0;
            ListNode *newnode = new ListNode(sum1);
           
            curr->next = newnode;
            curr= curr->next;
            // cout<<curr->data<<"\n";
            
            //move the pointer on both list
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL)
        {
            sum1 = temp1->val + carry;
            
            if(sum1>=10)
            {
                sum1 = sum1%10;
                carry = 1;
            }
            else
            carry=0;
            ListNode *newnode = new ListNode(sum1);
            curr->next = newnode;
            curr= curr->next;
            temp1 = temp1->next;

        }
        while(temp2!=NULL)
        {
            sum1 = temp2->val + carry;
            
            if(sum1>=10)
            {
                sum1 = sum1%10;
                carry = 1;
            }
            else
            carry=0;
            ListNode *newnode = new ListNode(sum1);
            curr->next = newnode;
            curr= curr->next;
            temp2 = temp2->next;

        }
        if(carry==1)
        {
            ListNode *newnode = new ListNode(1);
            curr->next = newnode;
            curr= curr->next;
        }
    head = head->next;
    head = ob.reverseList(head);
    return head;
    }
};