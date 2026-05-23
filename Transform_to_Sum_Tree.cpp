/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int convert(Node* root){
        if(!root)return 0;
        int v = root->data;
        int l = convert(root->left);
        int r = convert(root->right);
        
        root->data = l+r;
        return l+r+v;
    }
    
    void toSumTree(Node *root) {
        convert(root);
        
    }
};
