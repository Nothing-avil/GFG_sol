/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
  
  int dfs(Node *root,int val) {
        if(!root)
            return 0;
        int rightTreeSum = dfs(root->right,val);
        int rootData = root->data;
        root->data = val+rightTreeSum;
        int leftTreeSum = dfs(root->left,val+rootData+rightTreeSum);
        return leftTreeSum+rightTreeSum+rootData;
    }
    
    void transformTree(Node *root) {
        dfs(root, 0);
    }
};
