/*//Structure of the Node of the BST is as
struct Node {
    int key;
    Node* left, *right;
};


   'N' is the element
   'size' is the total element in BST
  */
*/
class Solution {
  public:
  
    int findMaxForN(Node* root, int n) {
        if(root==NULL){
            return -1;
        }
        if(root->key==n){
            return n;
        }
        return root->key<n? (max(root->key, findMaxForN(root->right, n))):( min(root->key, findMaxForN(root->left, n)));
    }
};
