class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node *temp=NULL, *tail;
        while(head1 && head2){
            if(head1->data == head2->data){
                if(temp==NULL){
                    temp= new Node(head1->data);
                    tail=temp;
                }
                else{
                    tail->next=new Node(head1->data);
                    tail=tail->next;
                }
                head1=head1->next;
                head2= head2->next;
            }
            else if(head1->data < head2->data){
                head1=head1->next;
            }
            else if(head1->data > head2->data){
                head2= head2->next;
                
            }
        }
        return temp;
    }
};
