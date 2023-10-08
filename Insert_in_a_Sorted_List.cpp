class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        if(!head){
            Node *newnode= new Node(data);
            head= newnode;
            return head;
        }
        if(head->data >= data){
            Node *newnode= new Node(head->data);
            newnode->next=head->next;
            head->data= data;
            head->next = newnode;
            return head;
        }
        else{
            head->next= sortedInsert(head->next, data);
            return head;
        }
    }
};
