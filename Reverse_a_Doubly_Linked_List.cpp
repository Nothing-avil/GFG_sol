struct Node* reverseDLL(struct Node * head)
{
    head->prev = head->next;
    head->next = NULL;
    while(head->prev != NULL) {
          head->prev->prev = head->prev->next;
          head->prev->next = head;
          head = head->prev;
    }
    return head;
}
