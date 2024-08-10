class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        Node* p= head;
        while(p->next != NULL){
            p = p->next;
        }
        for(int i=1; i<=k; i++){
            Node* t = head;
            head = head->next;
            t->next = NULL;
            p->next = t;
            p = t;
        }
        return head;
    }
};
