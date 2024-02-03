
/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        void solve(Node *head, long long unsigned int &res){
            if(head==NULL){
                return;
            }
            res=(res*2+ head->data)%1000000007;
            solve(head->next, res);
        }
        long long unsigned int decimalValue(Node *head)
        {
            long long unsigned int res=0;
            solve(head, res);
            return res;
        }
};
