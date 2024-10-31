/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node* new_node = new Node();
        new_node->data = x;

        if (head == nullptr || head->data > x) {
            new_node->next = head;
            return new_node;
        }

        Node* next_node = head;
        Node* prev = nullptr;

        while (next_node && next_node->data <= x) {
            prev = next_node;
            next_node = next_node->next;
        }

        new_node->next = next_node;
        if (prev)
            prev->next = new_node;
    
        return head;
    }
};
