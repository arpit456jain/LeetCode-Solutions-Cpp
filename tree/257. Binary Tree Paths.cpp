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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        rootToLeaf(root,"",ans);
        return ans;
    }
    void rootToLeaf(TreeNode* root,string curpath,vector<string> &ans) {
        if (root == NULL)
            return;
        if(root->left == NULL and root->right == NULL)
        {
            curpath = curpath + to_string(root->val);
            ans.push_back(curpath);
            return;
        }
        curpath = curpath + to_string(root->val);
        curpath = curpath + "->";
        rootToLeaf(root->left,curpath,ans);
        rootToLeaf(root->right,curpath,ans);
            
    }
};