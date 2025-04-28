// User function Template for C++

// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
  pair<int,int> dfs(Node* root){
        if(!root)return {0,0};
        auto l=dfs(root->left);
        auto r=dfs(root->right);
        //take/not_take
        return {root->data+l.second+r.second,max({l.first+r.first,l.second+r.second,
            l.first+r.second,r.first+l.second
        })};
    }
    int getMaxSum(Node *root) {
        // code here
        auto ans=dfs(root);
        return max(ans.first,ans.second);
    }
};
