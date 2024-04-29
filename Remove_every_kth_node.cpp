
/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int K){
        int count=0;
        if(K==1){
            return NULL;
        }
        Node* temp=head;
        while(temp){
            count++;
            if(count==K-1){
                if(temp->next!=NULL){
                    temp->next= temp->next->next;
                    count=0;
                }
            }
            temp= temp->next;
        }
        return head;
    }
};
