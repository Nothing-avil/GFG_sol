/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        Node *a1 = head1, *b1 = head2;
        while(a1 != b1){
            a1 = a1 ? a1->next : head2;
            b1 = b1 ? b1->next : head1;
        }
        if(!a1){
            return -1;
        }
        return a1->data;
    }
};
