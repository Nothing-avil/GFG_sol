class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node *curr;
        Node *temp;
        
        if(head==NULL || head->next==NULL){
            
            return head;
            
        }
        
        
        curr=head;
        temp=compute(head->next);
        
       if(curr->data<temp->data){
           
           curr=temp;
           head=curr;
           
       }else{
           
           curr->next=temp;
           head=curr;
           
       }
        return head;
        
    }
    
};
   
