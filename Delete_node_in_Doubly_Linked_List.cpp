class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x == 1){
            return head->next;
        }
        Node* t= head;
        int c=1;
        while(t){
            t=t->next;
            c++;
            if(c==x){
                t->prev->next= t->next;
                if(t->next!=NULL)t->next->prev=t->prev;
                delete t;
                break;
            }
        }
        return head;
    }
};
