/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        vector<Node*> res;
        Node* temp = head;
        Node* temp2 = head->next;
        res.push_back(temp);
        res.push_back(temp2);
        while(temp && temp2){
            if(temp->next){
                temp->next = temp->next->next;
                temp=temp->next;
            }
            if(temp2->next){
                temp2->next = temp2->next->next;
                temp2=temp2->next;
            }
        }
        return res;
    }
};
