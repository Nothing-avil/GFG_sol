class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    void solve(Node* root , Node* &head){
        
        if(root == NULL){
            return;
        }
        
        solve(root->right,head);
        root->right = head;
        if(head != NULL){
            head->left = root;
        }
        head = root;
        solve(root->left,head);
        
    }
    Node *bTreeToCList(Node *root)
    {
        Node* head = NULL;
        solve(root,head);
        Node* tail = head;
        while(tail->right != NULL){
            tail = tail->right;
        }
        tail->right = head;
        head->left = tail;
        return head;
    }
};
