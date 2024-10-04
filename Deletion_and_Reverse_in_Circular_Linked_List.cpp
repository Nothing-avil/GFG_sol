class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        Node* next_=head->next;
        Node* temp=NULL;
        Node* last = head;
        while(next_!=last)
        {
            temp=next_->next;
            next_->next=head;
            head=next_;
            next_=temp;
        }
        last->next = head;
        return head;
        
    }
    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if(!head->next)
        return NULL;
        Node* prev = head;
        Node* curr = head->next;
        Node* ansNode = NULL;
        if(head->data==key)
        {
            ansNode = head->next;
            while(curr!=head)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            return ansNode;
        }
        else{
            ansNode = head;
        }
        Node* flag = curr;
        do
        {
            if(curr->data==key)
            {
                prev->next = curr->next;
                return ansNode;
            }
            prev = curr;
            curr = curr->next;
        }
        while(curr!=flag);
        return ansNode;
    }
};
