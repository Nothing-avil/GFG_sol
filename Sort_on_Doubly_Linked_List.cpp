class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    Node* merge(Node* a, Node *b){ 
        if(!a or !b) return a ? a : b;
        if(a->data <= b->data){
            a->next = merge(a->next, b);
            a->next->prev = a;
            return a;
        }
        b->next = merge(a, b->next);
        b->next->prev = b;
        return b;
    } 
    Node* sortDoubly(Node* head) {
        if (!head || !head->next) return head;
        Node *s = head, *f = head;
        while(f and f->next) s = s->next, f = f->next->next;
        s->prev->next = s->prev = NULL;
        return merge(sortDoubly(head), sortDoubly(s)); 
    }
};
