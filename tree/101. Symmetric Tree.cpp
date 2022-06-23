/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->left,root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL)
            return true ;
        if (p == NULL or q == NULL)
            return false;
        if(p->val!=q->val )
            return false;
        
        // recursive call
        bool first = isSameTree(p->left,q->right);
        bool second = isSameTree(p->right,q->left);
        
        if(first and second)
            return true;
        else
            return false;
    }
};