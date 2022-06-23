/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<int> postorder(Node* root) {
        vector<int> arr;
        postorderTraversel(root,arr);
        return arr;
    }
    void postorderTraversel(Node* root,vector<int>& arr)
    {
         if(root == NULL)
            return ;
        for(int i=0;i<root->children.size();i++)
        {
            postorderTraversel(root->children[i],arr);  
        }
         arr.push_back(root->val);   
        return;
    }
    
};