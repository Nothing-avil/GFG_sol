/*struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    Node* trimZero(Node* head){
        Node* cur = head;
        while(cur != NULL && cur->data == 0){
            cur = cur->next;
        }
        return cur;
    }
    
    Node* reverse(Node* head){
        Node* cur = head;
        Node* prev = NULL;
        
        while(cur != NULL){
            Node* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        num1 = reverse(trimZero(num1));
        num2 = reverse(trimZero(num2));
        
        if(num1 == NULL && num2 == NULL)return new Node(0);
        
        Node* head = new Node(-1);
        Node* tail = head;
        int carry = 0;
        
        while(num1 != NULL || num2 != NULL || carry != 0){
            int x = num1 == NULL ? 0 : num1->data;
            int y = num2 == NULL ? 0 : num2->data;
            
            int d = x+y+carry;
            carry = d/10;
            tail->next = new Node(d%10);
            tail = tail->next;
            
            if(num1 != NULL)num1 = num1->next;
            if(num2 != NULL)num2 = num2->next;
        }
        
        return reverse(head->next);
    }
    
    
};
