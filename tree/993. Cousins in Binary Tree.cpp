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
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root == NULL)
            return false;
        if(root->left == NULL and root->right == NULL)
            return false;
        if(root->val == x or root->val == y)
            return false;
        
        int Parentx = -1;
        int Parenty = -1;
        int xHeight = findHeight(root,Parentx,x,0);
        int yHeight = findHeight(root,Parenty,y,0);
        
        if(xHeight == yHeight and Parentx!=Parenty)
            return true;
        return false;
    }
    
    int findHeight(TreeNode* root,int &parent,int val,int height)
    {
        // last node
        if(root==NULL)
            return 0;
        
        if(root->val == val)
            return height;
        
        parent = root->val;
        int left = findHeight(root->left,parent,val,height+1);
        
        if(left!=0) // that means we dont find the required value in left subtree
            return left;
        parent = root->val;
        int right = findHeight(root->right,parent,val,height+1);
        
        return right;
    }
};