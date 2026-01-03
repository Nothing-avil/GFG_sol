/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node* Merge2SortedList(Node* head1, Node* head2)
    {
        Node* hook = new Node(-1);
        
        Node* itr1 = head1;
        Node* itr2 = head2;
        Node* itr3 = hook;
        
        while(itr1 and itr2){
            if(itr1->data < itr2->data){
                itr3->bottom = itr1;
                itr1 = itr1->bottom;
            }
            else{
                itr3->bottom = itr2;
                itr2 = itr2->bottom;
            }
            itr3 = itr3->bottom;
        }
        while(itr1){
            itr3->bottom = itr1;
            itr1 = itr1->bottom;
            itr3 = itr3->bottom;
        }
        while(itr2){
            itr3->bottom = itr2;
            itr2 = itr2->bottom;
            itr3 = itr3->bottom;
        }
        return hook->bottom;
    }
    Node *flatten(Node *root) {
        Node* itr = root->next;
        while(itr){
            root = Merge2SortedList(root, itr);
            itr = itr->next;
        }
        return root;
    }
};
