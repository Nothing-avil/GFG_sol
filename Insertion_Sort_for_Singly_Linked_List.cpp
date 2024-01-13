
/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        if(!head || !head->next){
            return head;
        }
        struct Node* nHead= new Node(-1);
        struct Node* node= head;
        while(node){
            struct Node* key= nHead;
            struct Node* nxt= nHead->next;
            while(nxt){
                if(node->data < nxt->data){
                    break;
                }
                key= nxt;
                nxt=nxt->next;
            }
            struct Node* t= node->next;
            node->next= nxt;
            key->next= node;
            node=t;
        }
        return nHead->next;
    }
    
};
