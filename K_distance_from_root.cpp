struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> res;
    
    void solve(struct Node *root, int n, int k){
        if(!root){
            return;
        }
        if(n==k){
            res.push_back(root->data);
        }
        solve(root->left, n+1, k);
        solve(root->right, n+1, k);
    }
    
    vector<int> Kdistance(struct Node *root, int k)
    {
        solve(root, 0, k);
        return res;
    }
};
