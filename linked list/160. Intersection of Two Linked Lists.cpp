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
    int getLength(ListNode* head)
    {
        int count=0;
        ListNode* temp = head;;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
     return count;   
    }
    
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        // Your Code Here
    Solution ob;
    int length1 = ob.getLength(head1);
    int length2 = ob.getLength(head2);
    
    // cout<<length1<<" "<<length2<<"\n";

    
   
    ListNode *temp,*temp2;
    
    // run the pointer of longest list
    if(length1 >= length2)
    {
         int difference = length1 - length2;
        // move pointer 1
        temp = head1;
        temp2=head2;
        while(difference>0)
        {
            temp=temp->next;
            difference--;
        }
    }
    else
    {
        // move pomter 2
         int difference = length2 - length1;
        temp = head2;
        temp2 = head1;
        while(difference>0)
        {
            temp=temp->next;
            difference--;
        }
    }
    
    // now both pointers are eqidistant from NULL so run both list until NULL
    // if address coincide break;
    while(temp!=NULL && temp2!=NULL)
    {
        if(temp == temp2)
            return temp;
        if(temp->next == temp2->next)
        return temp->next;
        temp=temp->next;
        temp2=temp2->next;
    }
    return NULL ;
    }
};