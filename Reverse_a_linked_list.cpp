struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* after = NULL;
        while(curr != NULL){
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }
        head = prev;
        return head;
    }
};
