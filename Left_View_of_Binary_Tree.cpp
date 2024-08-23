void solver(Node *root, vector<int>& res, int h){
    if(root==NULL){
        return;
    }
    if(res.size()==h){
        res.push_back(root->data);
    }
    solver(root->left, res, h+1);
    solver(root->right, res, h+1);
}

vector<int> leftView(Node *root)
{
    vector<int> res;
    solver(root, res, 0);
    return res;
}
