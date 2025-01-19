class Solution {
  public:
    Node* rotate(Node* head, int k) {
        Node* last = head;
        int s =1;
        while(last->next != NULL){
            last = last->next;
            s++;
        }
        k = k%s;
        while(k-- > 0){
            Node* f = head;
            head = head->next;
            f->next = NULL;
            last->next = f;
            last = f;
        }
        return head;
    }
};
