/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/
class Solution {
  public:
  
  Node *nextt=NULL;
    void populateNext(Node *root) {
        if(root==NULL){
            return;
        }
        populateNext(root->right);
        root->next = nextt;
        nextt = root;
        populateNext(root->left);
    }
};
