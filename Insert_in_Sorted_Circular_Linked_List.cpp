/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* cur=head;
        Node* nhead = new Node(data);
        if(!head){
           nhead->next=nhead;
           return nhead;
        }
        else if(head->data>data){
          while(cur->next!=head){
              cur=cur->next;
          }
          nhead->next=cur->next;
          cur->next=nhead;
          return nhead;
        }
        else{
           while(cur->next!=head && cur->next->data<data){
               cur=cur->next;
           }
           nhead->next=cur->next;
           cur->next=nhead;
        }
        return head;
    }
};
