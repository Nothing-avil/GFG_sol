class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* tree(vector<int>& res, int l, int r){
        if(l>r){
            return NULL;
        }
        int mid= l + (r-l)/2;
        Node* BST= new Node(res[mid]);
        BST->left= tree(res, l, mid-1);
        BST->right= tree(res, mid+1, r);
        
        return BST;
    }
    void inorder(Node* root, vector<int>& res){
        if(root==NULL){
            return;
        }
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    Node* buildBalancedTree(Node* root)
    {
        if(root==NULL){
            return root;
        }
        vector<int>res;
        inorder(root, res);
        int n= res.size();
        return tree(res, 0, n-1);
    }
};
