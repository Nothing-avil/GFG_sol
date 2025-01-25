/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}
*/
class Solution {
  public:
    Node* findFirstNode(Node* head) {
        if(head == NULL) return nullptr;
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
            return NULL;
        }
        temp = head;
        while(t != temp){
            t = t->next;
            temp = temp->next;
        }
        return t;
    }
};
