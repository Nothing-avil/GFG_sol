/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void solve(Node *root, int key, Node* &pre, Node* &suc){
        if(!root)return;
        // cout<<root->data<<" ";
        if(root->data==key){
            solve(root->right, key, pre, suc);
            solve(root->left, key, pre, suc);
        }
        else{
            if(root->data>key){
                suc=root;
                solve(root->left, key, pre, suc);
            }
            else{
                pre=root;
                solve(root->right, key, pre, suc);
            }
        }
        return;
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre=NULL;
        Node* suc=NULL;
        
        solve(root, key, pre, suc);
        return {pre, suc};
    }
};
