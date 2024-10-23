class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        int c=0;
        Node* t=  head;
        while(t){
            t=t->next;
            c++;
        }
        t= head;
        int x = c-n;
        while(x--){
            t=t->next;
        }
        int sums=0;
        while(t){
            sums+=t->data;
            t=t->next;
        }
        return sums;
    }
};
