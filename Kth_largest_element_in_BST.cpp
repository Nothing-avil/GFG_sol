class Solution
{
    public:
    void inorder(Node* root, vector<int>& p){
        if(root==NULL){
            return;
        }
        inorder(root->left, p);
        p.push_back(root->data);
        inorder(root->right, p);
    }
    int kthLargest(Node *root, int K)
    {
        if(root==NULL){
            return INT_MIN;
        }
        vector<int> p;
        inorder(root, p);
        int n= p.size();
        return p[n-K];
    }
};
