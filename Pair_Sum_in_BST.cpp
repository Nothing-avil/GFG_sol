/*
Node is as follows
class Node {
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
  
  vector<int> check;
  
  void inorder(Node* root){
      if(root == NULL){
          return;
      }
      inorder(root->left);
      check.push_back(root->data);
      inorder(root->right);
  }
  
    bool findTarget(Node *root, int target) {
        inorder(root);
        int l = 0;
        int h = check.size()-1;
        while(l<h){
            int sum = check[l] + check[h];
            if(sum == target){
                return true;
            }
            if(sum < target){
                l++;
            }
            else{
                h--;
            }
        }
        return false;
    }
};
