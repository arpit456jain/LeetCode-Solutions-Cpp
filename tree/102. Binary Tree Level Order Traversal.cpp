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
    vector<vector<int>> levelOrder(TreeNode* root) {
      return getrightView(root);  
    }
    vector<vector<int>> getrightView(TreeNode *root)
    {
        vector<vector<int>> outer;
        if(root == NULL)
            return outer;
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
            
            outer.push_back(inner);
           
        }
        
        return outer;
    }
};