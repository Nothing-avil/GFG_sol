Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
  vector<vector<int>> res;
  void solve(Node* root, vector<int>& a){
      if(root==NULL){
          return;
      }
      
      a.push_back(root->data);
      if(root->left == NULL && root->right == NULL)
            res.push_back(a);
            
      solve(root->left, a);
      solve(root->right, a);
      a.pop_back();
  }
  
    vector<vector<int>> Paths(Node* root) {
        vector<int> a;
        solve(root, a);
        return res;
    }
};
