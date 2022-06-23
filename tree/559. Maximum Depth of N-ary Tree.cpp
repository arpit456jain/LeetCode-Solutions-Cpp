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
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        //loop for all children
         // int left_height = minDepth(root->left);
        // int right_height = minDepth(root->right);
        int ans = 0;
        for(int i=0;i<root->children.size();i++)
        {
             int maxans = maxDepth(root->children[i]);
            ans = max(ans,maxans);
        }
            
        return ans+1;
    }
};