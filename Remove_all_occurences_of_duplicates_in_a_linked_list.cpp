// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        Node* curr=head;
        Node* front = curr->next;
        Node* prev = NULL;
        Node* root = NULL;
        while(curr!=NULL && front!=NULL){
            if(curr->data != front->data){
                if(prev == NULL) root = curr;
                prev = curr;
                curr = front;
                front = front->next;
            }else{
                while(front!=NULL && front->data == curr->data){
                    front = front->next;
                }
                curr = front;
                if(prev) prev->next = curr;
                if(curr) front = curr->next;
            }
        }
        if(root==NULL) return curr;
        return root;
    }
};
