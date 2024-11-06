/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
  
  int ans = 0;
    void solver(Node* root, int check){
        if(!root){
            return;
        }
        check = check*10 + root->data;
        if(root->right==NULL && root->left==NULL){
            ans+= check;
            return;
        }
        solver(root->left, check);
        solver(root->right, check);
    }
  
  
    int treePathsSum(Node *root) {
        solver(root, 0);
        return ans;
    }
};
