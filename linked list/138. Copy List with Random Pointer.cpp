/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     //Write your code here
        Node *cur,*temp;
        cur = head;
        if(head==NULL)
            return NULL;
        
        while(cur)
        {
            temp=cur->next;
            cur->next = new Node(cur->val);
            cur->next->next = temp;
            cur=temp;
        }
        cur = head;
        while(cur)
        {
            if(cur->random!=NULL)
            {
                cur->next->random = cur->random->next;
            }
            cur=cur->next->next;
        }
        Node *original = head;
        Node *copy = head->next;
        temp=copy;
        while(original and copy)
        {
            original->next = original->next->next;
            if(copy->next!=NULL)
            copy->next = copy->next->next;
            
            original = original->next;
            copy=copy->next;
        }
        return temp;   
    }
};