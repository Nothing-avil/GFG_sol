/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
  Node* first = NULL, *midd = NULL, *last = NULL, *prev = NULL;
  
  void helper(Node* root){
      if(root == NULL){
          return;
      }
      helper(root->left);
      if(prev != NULL && prev->data > root->data){
          if(first == NULL){
              first = prev;
              midd = root;
          }
          else{
              last = root;
          }
      }
      prev = root;
      helper(root->right);
  }
  
  void swap(Node* f, Node* l){
      int t = f->data;
      f->data = l->data;
      l->data = t;
  }
  
    void correctBST(Node* root) {
        helper(root);
        if(last == NULL){
            swap(first, midd);
        }
        else{
            swap(first, last);
        }
    }
};
