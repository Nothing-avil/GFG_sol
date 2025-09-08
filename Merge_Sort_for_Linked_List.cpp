/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  Node* merge(Node* head1, Node* head2) {
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        while (head1 && head2) {
            int val1 = head1->data, val2 = head2->data;
            if (val1 > val2) {
                temp->next = head2;
                head2 = head2->next;
            } else {
                temp->next = head1;
                head1 = head1->next;
            }
            temp = temp->next;
        }
        if (head1) temp->next = head1;
        else if (head2) temp->next = head2;
        return dummy->next;
    }
    Node* secondHead(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node* mergeSort(Node* head) {
        if (!head) return head;
        if (head->next == NULL) return head;
        Node* start = head;
        Node* temp = secondHead(head);
        Node* middle = temp->next;
        temp->next = NULL;
        Node* head1 = mergeSort(start);
        Node* head2 = mergeSort(middle);
        return merge(head1, head2);
    }
};
