Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

class Solution
{
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
        string s="aeiou";
        Node* i=head;
        Node* j=head;
        while(j && i){
            if(s.find(j->data)!=string::npos){
                swap(i->data, j->data);
                i=i->next;
                j=i;
                continue;
            }
            swap(i->data, j->data);
            j=j->next;
        }
        while(i->next){
            swap(i->next->data, i->data);
            i=i->next;
        }
        return head;
    }
};
