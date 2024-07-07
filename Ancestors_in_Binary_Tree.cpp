/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int> res;
    
    void solve(struct Node* root, int target, bool& key){
        if (root == nullptr || key==true) return;
        
        if (key == false){
            solve(root->left, target, key);
            solve(root->right, target, key);
        }
        
        if (key == true){
            res.push_back(root->data);
        }
        
        if (target == root->data){
            key = true;
        }
        
    }
    
    vector<int> Ancestors(struct Node *root, int target) {
        bool key = false;
        
        solve(root, target, key);
        return res;
    }
};
