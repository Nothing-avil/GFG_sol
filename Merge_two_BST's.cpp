/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> res;
    
    void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        res.push_back(root->data);
        inorder(root->right);
    }
    
    vector<int> merge(Node *root1, Node *root2) {
        inorder(root1);
        inorder(root2);
        sort(res.begin(), res.end());
        return res;
    }
};
