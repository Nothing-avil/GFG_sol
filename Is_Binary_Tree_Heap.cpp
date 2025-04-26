// User Function template for C++

// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
    public:
    bool isHeap(Node* tree) {
        if(tree==nullptr) return true;
        queue<Node*> q;
        Node *root = tree;
        q.push(root);
        bool nullflag = false;
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            if(node==nullptr) nullflag = true;
            else{
                if(nullflag==true) return false;
                if(node->left && node->left->data > node->data ||
                node->right && node->right->data > node->data) return false;
            
                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;
    }
};
