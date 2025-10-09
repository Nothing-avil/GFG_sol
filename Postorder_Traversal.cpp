/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> answer;
        function<void(Node*)> order = [&](Node* r){
            if(!r){
                return;
            }
            order(r->left);
            order(r->right);
            answer.push_back(r->data);
        };
        order(root);
        return answer;
    }
};
