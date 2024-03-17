Structure of the node of the linked list is as
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
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int>st;
        int count=0;
        struct Node* temp=head1;
        while(temp){
            st.insert(temp->data);
            temp=temp->next;
        }
        struct Node* temps=head2;
        while(temps){
            if(st.find(x-temps->data)!= st.end()){
                count++;
            }
            temps=temps->next;
        }
        return count;
    }
};
