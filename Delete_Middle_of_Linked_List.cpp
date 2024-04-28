// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(head->next==NULL){
            return head->next;
        }
        Node* temp=  head;
        Node* temp2= head->next;
        while((temp2->next!=NULL)&&(temp2->next->next!=NULL)){
            temp= temp->next;
            temp2= temp2->next->next;
        }
        if(temp->next==NULL){
            temp->next=NULL;
        }
        else{
            temp->next= temp->next->next;
        }
        return head;
    }
};
