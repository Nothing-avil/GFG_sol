// User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        Node* temp = head;
        Node* t = head->next;
        while(t!=NULL && temp!= NULL && t->next!=NULL && temp->next!= NULL){
            if(temp == t){
                return true;
            }
            temp = temp->next;
            t = t->next->next;
        }
        return false;
    }
};
