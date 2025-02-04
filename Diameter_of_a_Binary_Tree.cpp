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

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
  
  int solver(Node* root, int& dia){
      if(root == NULL){
          return 0;
      }
      int left = solver(root->left, dia);
      int right = solver(root->right, dia);
      dia = max(dia, left+right);
      return max(left, right)+1;
  }
  
    int diameter(Node* root) {
        int dia = INT_MIN;
        solver(root, dia);
        return dia;
    }
};
