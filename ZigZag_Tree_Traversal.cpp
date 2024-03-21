/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        queue<Node*>q;
        vector<int>v;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int n=q.size();
            int siz=v.size();
            while(n--){
                Node*curr=q.front();
                q.pop();
                v.push_back(curr->data);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(flag){
                reverse(v.begin()+siz,v.end());
            }
            flag=!flag;
        }
        
        return v;
    }
};
