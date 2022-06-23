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
    bool isUnivalTree(TreeNode* root) {
         vector<int> arr;
         arr.push_back(root->val);
        arr.push_back(1); // true
         preorder(root,arr);
        
        if(arr[1] == 1)
        return true;
        
        else
            return false;
    }
     void preorder(TreeNode* root,vector<int>& arr)
    {
         if(root == NULL)
            return ;
             
        if(root->val != arr[0])
            arr[1] = 0;
        preorder(root->left,arr);
        preorder(root->right,arr);
        
        return;
    }
};