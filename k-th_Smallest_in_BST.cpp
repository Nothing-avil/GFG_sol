/*Complete the function below

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
    // Return the Kth smallest element in the given BST
    int c = 0;
    int ans = -1;
    void helper(Node* root, int k){
        if(root == NULL){
            return;
        }
        if(c >= k){
            return;
        }
        helper(root->left, k);
        c++;
        if(c == k){
            ans = root->data;
            return;
        }
        helper(root->right, k);
    }
    
    int kthSmallest(Node *root, int k) {
        helper(root, k);
        return ans;
    }
};
