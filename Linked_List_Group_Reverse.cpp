/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        if (k <= 1 || head == nullptr) return head; // No need to reverse
        
        Node* temp = head;
        vector<Node*> swp(k);
        int cnt = 0;

        while (temp != nullptr) {
            swp[cnt] = temp;
            cnt++;

            if (cnt == k) {
                int left = 0, right = k - 1;
                while (left < right) {
                    swap(swp[left]->data, swp[right]->data);
                    left++;
                    right--;
                }
                cnt = 0;
            }

            temp = temp->next;
        }
        if (cnt > 0 && cnt < k) {
            int left = 0, right = cnt - 1;
            while (left < right) {
                swap(swp[left]->data, swp[right]->data);
                left++;
                right--;
            }
        }

        return head;
    }
};
