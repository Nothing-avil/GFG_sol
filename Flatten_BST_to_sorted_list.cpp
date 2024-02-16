/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:

    Node* solve(Node *node, Node *temp){
        if(node == NULL){
            return temp;
        }
        Node* L= node->left;
        Node* R= node->right;
        node->left= node->right= NULL;
        solve(L, temp)->right= node;
        return solve(R, node);
    }

    Node *flattenBST(Node *root)
    {
        Node* temp= new Node(0);
        solve(root, temp);
        return temp->right;
    }
};
