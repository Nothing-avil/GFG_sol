/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node *slow=head;
        Node *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                int c=1;
                slow=slow->next;
                while(slow!=fast){
                    slow= slow->next;
                    c++;
                }
                return c;
            }
        }
        return 0;
    }
};
