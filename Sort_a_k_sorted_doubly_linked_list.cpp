// User function Template for C++
 
/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        DLLNode *temp=head;
        priority_queue<int, vector<int>, greater<int>> pq;
        while(temp && k--){
            pq.push(temp->data);
            temp=temp->next;
        }
        
        DLLNode *curr=head;
        while(curr){
            if(temp){
                pq.push(temp->data);
                temp=temp->next;
            }
            
            curr->data = pq.top();
            pq.pop();
            curr=curr->next;
        }
        
        return head;
    }
};
