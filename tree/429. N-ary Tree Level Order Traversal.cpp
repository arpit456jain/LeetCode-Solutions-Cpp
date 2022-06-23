/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       return getrightView(root);  
    }
    vector<vector<int>> getrightView(Node *root)
    {
        vector<vector<int>> outer;
        if(root == NULL)
            return outer;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> inner = {};
            int count = q.size();
            for(int i=0;i<count;i++)
            {
                Node* temp = q.front();
                q.pop();
                for(int i=0;i<temp->children.size();i++)
                    {
                        if(temp->children[i]!=NULL)
                            q.push(temp->children[i]);
                    }
                
                inner.push_back(temp->val);
                
            }
            
            outer.push_back(inner);
           
        }
        
        return outer;
    }
//     void levelorderTraversel(Node* root,vector<vector<int>>& arr)
//     {
//          if(root == NULL)
//             return ;
//         cout<<root->val;
//         for(int i=0;i<root->children.size();i++)
//         {
//             levelorderTraversel(root->children[i],arr);  
//         }
          
//         return;
//     }
};