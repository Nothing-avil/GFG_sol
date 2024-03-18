class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> res;
    vector<int> levelOrder(Node* root)
    {
        queue<Node*> qu;
        qu.push(root);
        while(!qu.empty()){
            Node* temp= qu.front();
            qu.pop();
            if(temp->left!=NULL){
                qu.push(temp->left);
            }
            if(temp->right!=NULL){
                qu.push(temp->right);
            }
            res.push_back(temp->data);
        }
        return res;
    }
};
