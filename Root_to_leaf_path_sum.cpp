/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to complete this function */
class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        if(!root) return 0;
        if(root->left==NULL && root->right==NULL){
            if(root->data==target) return 1;
            else return 0;
        }
        return (hasPathSum(root->left, target-root->data) ||
                hasPathSum(root->right, target-root->data));
    }
};
