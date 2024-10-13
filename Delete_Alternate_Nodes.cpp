/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        Node* t = head;
        while(t && t->next){
            t->next = t->next->next;
            t=t->next;
        }
    }
};
