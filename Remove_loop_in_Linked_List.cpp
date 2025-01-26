/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if(head == NULL) return;
        Node* temp = head;
        Node* t = head;
        while(t != NULL && t->next!=NULL){
            temp = temp->next;
            t = t->next->next;
            if(temp == t){
                break;
            }
        }
        if(t != temp){
            return;
        }
        temp = head;
        while(t != temp){
            t = t->next;
            temp = temp->next;
        }
        Node* ll = t->next;
        while(ll->next != t){
            ll = ll->next;
        }
        // cout<< ll->data <<endl;
        ll->next = NULL;
    }
};
