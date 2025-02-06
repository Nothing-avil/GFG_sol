// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &in, vector<int> &pre) {
        if(in.size() == 0 || pre.size() == 0){
            return NULL;
        }
        Node* node = new Node(pre[0]);
        auto it = find(in.begin(), in.end(), pre[0]);
        int i = distance(in.begin(), it);
        vector<int> leftin(in.begin(), it);
        vector<int> leftpre(pre.begin()+1, pre.begin() + 1 + i);
        vector<int> rightin(it + 1, in.end());
        vector<int> rightpre(pre.begin() + 1 + i, pre.end());
        node->left = buildTree(leftin, leftpre);
        node->right = buildTree(rightin, rightpre);
        return node;
    }
};
