Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/

class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        vector<int> ans;
        Node * temp=root;
        queue<Node*> q;
        while(temp){
            q.push(temp);
            temp=temp->right;
        }
        while(q.size()>0){
            int t=q.size();
            int sum=0;
            while(t--){
                auto it=q.front();
                q.pop();
                if(it->left){
                    temp=it->left;
                     while(temp){
                    q.push(temp);
                    temp=temp->right;
                 }
                }
                sum+=it->data;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
