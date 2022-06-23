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
    bool hasPathSum(TreeNode* root, int targetSum) {
       return ispossible(root,targetSum,0);
    }
    bool ispossible(TreeNode* root, int targetSum,int cursum) 
    {
        if(root == NULL)
            return false;
        if(root->left == NULL and root->right == NULL)
        {
            cursum+=root->val;
            if(cursum == targetSum)
                return true;
            else
                return false;
        }
        cursum += root->val;
        return ispossible(root->left,targetSum,cursum) or ispossible(root->right,targetSum,cursum);
        
    }
};