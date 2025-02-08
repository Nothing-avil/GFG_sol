/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> ans;
    
    void leftn(Node *root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            return;
        }
        if(root){
            ans.push_back(root->data);
        }
        leftn(root->left);
        if(!root->left && root->right){
            leftn(root->right);
        }
    }
    
    void leaf(Node* root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            ans.push_back(root->data);
        }
        leaf(root->left);
        leaf(root->right);
    }
    
    void rightn(Node *root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            return;
        }
        rightn(root->right);
        if(root->left && !root->right){
            rightn(root->left);
        }
        if(root){
            ans.push_back(root->data);
        }
    }
  
    vector<int> boundaryTraversal(Node *root) {
        ans.push_back(root->data);
        if(!root->left && !root->right){
            return ans;
        }
        leftn(root->left);
        leaf(root);
        rightn(root->right);
        return ans;
    }
};
