/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        Node* res = new Node(-1);
        Node* temp = res;
        while(head1 != NULL && head2 != NULL){
            if(head1->data <= head2->data){
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            }
            else{
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
        }
        if(head1 != NULL){
            temp->next = head1;
        }
        if(head2 != NULL){
            temp->next = head2;
        }
        return res->next;
    }
};
