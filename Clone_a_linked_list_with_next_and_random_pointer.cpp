/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *copyList(Node *head) {
        map<Node*, Node*> mp;
        Node* temp = head;
        while(temp!=NULL){
            mp[temp] = new Node(temp->data);
            temp= temp->next;
        }
        mp[nullptr] = nullptr;
        temp= head;
        while(temp!=NULL){
            mp[temp]->next = mp[temp->next];
            mp[temp]->random = mp[temp->random];
            temp=temp->next;
        }
        return mp[head];
    }
};
