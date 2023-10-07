class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL)
            return head;
            
        Node *temp1=head;
        Node *temp2=head->next;
        Node *temp3= pairWiseSwap(head->next->next);
        
        temp2->next = temp1;
        temp1->next = temp3;
        return temp2;
    }
};
