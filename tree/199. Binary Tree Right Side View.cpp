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
    vector<int> rightSideView(TreeNode* root) {
        return getrightView(root);
    }
    vector<int> getrightView(TreeNode *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> inner = {};
            int count = q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left!=NULL)
                q.push(temp->left);

                if(temp->right!=NULL)
                q.push(temp->right);
                
                inner.push_back(temp->val);
            }
            // for left view
            // ans.push_back(inner[0]);
            
            //for right view
            ans.push_back(inner[inner.size()-1]);
           
        }
        
        return ans;
    }
};