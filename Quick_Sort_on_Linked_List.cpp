class Solution {
     struct Node* partition( Node* head,
      Node* tail){
         struct Node* i=head;
         struct Node* j=head->next;
         while(j!=tail->next){
             if(j->data<head->data){
                 i=i->next;
                 swap(i->data, j->data);
             }
             j=j->next;
         }
         swap(head->data, i->data);
         return i;
     }
  public:
    void sort(struct Node* head,struct Node* tail){
        if(head !=tail && head != NULL && tail !=NULL){
            struct Node* p=partition(head,tail);
            sort(head,p);
            sort(p->next,tail);
        }
        return;
    }
    struct Node* quickSort(struct Node* head) {
        if (!head || !head->next) return head; // Edge case: empty or single element list

    // Find the last node in the list
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // Perform quicksort
    sort(head, tail);
    return head;
    }
};
