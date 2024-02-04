lass Solution {
public:

    Node* removeLeadingZeros(Node* head) {
        while(head && head->data == 0)
            head = head->next;
        return head;
    }

    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    int length(Node* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }


    bool isGreater(Node* head2, Node* head1) {
        int len2 = length(head2), len1 = length(head1);
        if(len2 > len1) return true;
        if(len2 < len1) return false;
        while(head2 && head1) {
            int val2 = head2->data, val1 = head1->data;
            if(val2 > val1) return true;
            if(val2 < val1) return false;
            head2 = head2->next;
            head1 = head1->next;
        }
        return false;
    }

    Node* subLinkedList(Node* head1, Node* head2) {
        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);
        
        if(isGreater(head2, head1))
            swap(head1, head2);
            
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* dummy = new Node(-1);
        Node* runner = dummy;
        
        bool carry = false;
        while(head1 || head2) {
            int val1 = 0, val2 = 0;
            if(head1) {
                val1 = head1->data;
                head1 = head1->next;
            }
            if(head2) {
                val2 = head2->data;
                head2 = head2->next;
            }
            
            if(carry) {
                val1--;
                carry = false;
            }
            int curr = val1 - val2;
            if(curr < 0) {
                curr += 10;
                carry = true;
            }
            Node* newNode = new Node(curr);
            runner->next = newNode;
            runner = runner->next;
        }
        Node* res = dummy->next;
        res = reverse(res);
        res = removeLeadingZeros(res);
        
        if(res == NULL)
            return new Node(0);
        
        return res;
    }
};
