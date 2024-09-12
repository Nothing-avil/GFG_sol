/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* t=head;
        int len=0;
        while(t!=NULL){
            t=t->next;
            len++;
        }
        t=head;
        len = (len/2);
        while(len--){
            t=t->next;
        }
        return t->data;
    }
};
