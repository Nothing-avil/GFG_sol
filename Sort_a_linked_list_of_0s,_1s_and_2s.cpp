/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
        Node* zeroPtr = zeroHead;
        Node* onePtr = oneHead;
        Node* twoPtr = twoHead;
        Node* ptr = head;
        while (ptr != nullptr) {
            if (ptr->data == 0) {
                zeroPtr->next = ptr;
                zeroPtr = zeroPtr->next;
            } else if (ptr->data == 1) {
                onePtr->next = ptr;
                onePtr = onePtr->next;
            } else {
                twoPtr->next = ptr;
                twoPtr = twoPtr->next;
            }
            ptr = ptr->next;
        }
        twoPtr->next = nullptr;
        onePtr->next = twoHead->next;
        zeroPtr->next = oneHead->next;
        return zeroHead->next;
    }
};
