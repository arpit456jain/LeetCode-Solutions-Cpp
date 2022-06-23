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
    int minDepth(TreeNode* root) {
     if(root == NULL)
            return 0;
        int left_height = minDepth(root->left);
        int right_height = minDepth(root->right);
        
        // for skewed tree
        if(root->right == NULL || root->left == NULL)
            return 1 + max(left_height,right_height);
            
        return 1 + min(left_height,right_height);   
    }
}