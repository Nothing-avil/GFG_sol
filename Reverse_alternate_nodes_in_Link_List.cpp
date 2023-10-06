class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        Node *temp=odd;
        Node *link=NULL;
        while(temp!=NULL){
            if(temp->next!=NULL){
                Node *newnode = new Node(temp->next->data);
                newnode->next=link;
                link=newnode;
                temp->next=temp->next->next;
            }
            if(temp->next==NULL){ 
                temp->next=link;
                break;
            }
            temp=temp->next;
        }
    }
};
