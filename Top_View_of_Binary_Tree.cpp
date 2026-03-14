/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> res;
        if(!root){
            return res;
        }
        else{
            queue<pair<Node*, int>> q;
            q.push({root, 0});
            map<int, int> mp;
            while(q.size()){
                auto i= q.front();
                q.pop();
                Node* node = i.first;
                int col = i.second;
                if(node->left){
                    q.push({node->left, col-1});
                }
                if(node->right){
                    q.push({node->right, col+1});
                }
                if(!mp.count(col)){
                    mp[col] = node->data;
                }
            }
            for(auto i: mp){
                res.push_back(i.second);
            }
        }
        return res;
    }
};
