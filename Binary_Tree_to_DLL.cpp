struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution {
  public:
    Node * head = NULL , *temp , * last;
    void search(Node * root)
    {
        if (root == NULL)   return ;
        search(root->left);
        
        temp = new Node(root->data);
        if (head == NULL)   head = temp ; 
        else
        {
            temp->left = last ; 
            last->right = temp;
        }
        last = temp  ;
        search(root->right);
        
    }
    Node* bToDLL(Node* root) {
        // code here
        head = temp = last = NULL;
        search(root);
        return head;
    }
};
