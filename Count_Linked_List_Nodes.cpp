/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        int c=0;
        Node* t = head;
        while(t){
            c++;
            t=t->next;
        }
        return c;
    }
};
