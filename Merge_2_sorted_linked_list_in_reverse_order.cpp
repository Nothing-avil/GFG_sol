class Solution
{
    public:
    struct Node* mergeTwoLists(Node *list1,Node *list2) {
        if(list1 == NULL) {
            return list2;
        }

        if(list2 == NULL) {
            return list1;
        }

        struct Node* result;
        if(list1->data < list2->data) {
            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        } else {
            result = list2;
            result->next = mergeTwoLists(list1, list2->next);
        }

        return result;
    }
    
    struct Node* reverseList(struct Node* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        struct Node* last = reverseList(head->next); //last = future head

        head->next->next = head;
        head->next = NULL;

        return last;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2) {
        struct Node* result = mergeTwoLists(node1, node2);
        
        
        result = reverseList(result);
        
        return result;
        
    }   
};
