/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* removekeys(Node* root, int l, int r) {
        if(root == NULL) {
            return NULL;
        }
        
        root->left = removekeys(root->left, l, r);
        root->right = removekeys(root->right, l, r);
        
        if(root->data >= l && root->data <= r) {
            return root;
        }
        
        if(root->left != NULL) {
            return root->left;
        } else {
            return root->right;
        }
    }
};
