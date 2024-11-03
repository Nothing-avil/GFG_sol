/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node* t=*head;
        int c=0;
        while(t){
            c++;
            t=t->next;
        }
        return (!(c&1));
    }
};
