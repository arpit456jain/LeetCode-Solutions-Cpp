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
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> arr;
        arr.push_back(0);
       findsum(root,arr,false);
        
        
    return arr[0];
    }
    void findsum(TreeNode* root,vector<int>& arr,bool check)
    {
        if(root == NULL)
            return;
        if(root->right == NULL and root->left == NULL and check == true)
        {
            arr[0] += root->val;
        }
        
        // true for left leaf and false for right leaf
        findsum(root->left,arr,true);
        findsum(root->right,arr,false);
        return;
    }
};