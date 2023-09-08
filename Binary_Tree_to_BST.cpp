class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void func(Node* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        v.push_back(root->data);
        func(root->left,v);
        func(root->right,v);
    }
    int i = 0;
    void func2(Node* &root,vector<int>&v){
        if(root==NULL){
            return;
        }
        // v.push_back(root->val);
        func2(root->left,v);
        root->data = v[i];
        i++;
        func2(root->right,v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        Node* node = root;
        func(root,v);
        sort(v.begin(),v.end());
        func2(root,v);
        return node;
    }
};
