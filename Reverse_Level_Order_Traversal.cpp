/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty()){
        int s= qu.size();
        for(int i=0; i<s; i++){
            Node* n= qu.front();
            qu.pop();
            res.push_back(n->data);
            if(n->right){
                qu.push(n->right);
            }
            if(n->left){
                qu.push(n->left);
            }
        }
    }
    reverse(res.begin(), res.end());
    
    return res;
}
