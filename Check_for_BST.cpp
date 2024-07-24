class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool inorder(Node * root, int mini, int maxi){
        if(root==NULL){
            return true;
        }
        if(root->data<=mini || root->data >= maxi){
            return false;
        }
        bool l = inorder(root->left, mini, root->data);
        bool r = inorder(root->right, root->data, maxi);
        if(!l || !r){
            return false;
        }
        return true;
    }
    
    
    bool isBST(Node* root) {
        return inorder(root, INT_MIN, INT_MAX);
    }
};
