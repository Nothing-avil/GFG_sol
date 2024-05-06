
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */


void solve(Node* root, vector<int>& res){
    if(root==NULL){
        return;
    }
    if((root->left==NULL)^ root->right==NULL){
        if(root->left){
            res.push_back(root->left->data);
        }
        else{
            res.push_back(root->right->data);
        }
    }
    solve(root->left, res);
    solve(root->right, res);
}

vector<int> noSibling(Node* node)
{
    vector<int> res;
    solve(node, res);
    if(res.size()==0) return {-1};
    sort(res.begin(), res.end());
    return res;
}
