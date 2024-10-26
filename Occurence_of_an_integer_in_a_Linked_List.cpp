/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        Node* t = head;
        int c=0;
        while(t){
            if(t->data == key){
                c++;
            }
            t=t->next;
        }
        return c;
    }
};
