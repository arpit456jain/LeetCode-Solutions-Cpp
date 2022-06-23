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
#include<string>
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
     int ans[1]; 
        ans[0] = 0; // because we are not making the integer global
        
        rootToLeaf(root,"",ans);
        return ans[0];
        
    }
    
    void rootToLeaf(TreeNode* root , string curstr,int ans[])
    {
        // if leaf node
        if(root->left == NULL and root->right == NULL)
        {
            //convert the binary string to int and add it to ans
            curstr += to_string(root->val);
            ans[0] += stoi(curstr,0,2);
            // cout<<stoi(curstr,0,2);
            
            return;
        }
        
        if(root->left != NULL)
            rootToLeaf(root->left , curstr + to_string(root->val) , ans);
        
        if(root->right != NULL)
            rootToLeaf(root->right , curstr + to_string(root->val) , ans);
        
        return;
    }
};