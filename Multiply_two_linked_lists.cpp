/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long num1 =0, num2=0;
        const int mod = 1e9+7;
        while(first){
            num1 = (num1*10 + first->data)%mod;
            first= first->next;
        }
        while(second){
            num2 = (num2*10 + second->data)%mod;
            second= second->next;
        }
        
        return (num1*num2)%mod;
    }
};
