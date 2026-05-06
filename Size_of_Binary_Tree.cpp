/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int getSize(Node* root) {
        if(!root) {
            return 0;
        }
        
        int ans = 1 + getSize(root->left) + getSize(root->right);
        
        return ans;
    }
};
