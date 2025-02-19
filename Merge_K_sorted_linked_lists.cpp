/*Linked list Node structure

struct Node
{
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
    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<pair<int,Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;
        for(Node* i : arr){
            if(i){
            pq.push({i->data, i});}
        }
        Node* res = new Node(-1);
        Node* t;
        t = res;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            t->next = it.second;
            t= t->next;
            if(it.second->next){
            pq.push({it.second->next->data, it.second->next});}
        }
        return res->next;
    }
};
