/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int>res;
    
    void solve(Node* root){
        if(root == NULL){
            return;
        }
        solve(root->left);
        res.push_back(root->data);
        solve(root->right);
    }
    
    
    vector<int> inOrder(Node* root) {
        solve(root);
        return res;
    }
};
