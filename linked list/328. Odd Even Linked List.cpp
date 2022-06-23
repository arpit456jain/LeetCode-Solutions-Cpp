class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        int i=1;
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
        ListNode *evenp , *oddp;
        evenp = even;
        oddp = odd;
        ListNode *temp  = head;
        while(temp!=NULL)
        {
              if(i%2==0)
              {
                  //even node
                  evenp->next = new ListNode(temp->val);
                  evenp = evenp->next;
              }
            else
            {
                //odd node
                oddp->next = new ListNode(temp->val);
                oddp = oddp->next;
            }
            
            temp=temp->next;
            i++;
        }
        
        // now there are two list odd and even
        oddp->next = even->next;
        
        return odd->next;
        // return even;
    }
};