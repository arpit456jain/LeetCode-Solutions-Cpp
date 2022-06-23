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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return getLevelOrderSpiral(root);
    }
    vector<vector<int>> getLevelOrderSpiral(TreeNode *root)
    {
        vector<vector<int>> outer;
        if(root == NULL)
            return outer;
        queue<TreeNode*> q;
        q.push(root);
        int flag = 0;
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
            
            if(flag == 0)
            {
                outer.push_back(inner);
                flag = 1;
            }
            else
            {
                reverse(inner.begin(),inner.end());
                outer.push_back(inner);
                flag=0;
            }
            
           
        }
        
        return outer;
    }
};