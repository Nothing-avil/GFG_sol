class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
         if(root == NULL)
            return 0;
        
        int l = height(root->left)+1;
        int r = height(root->right)+1;
        
        return max(l,r);
    }
    int heights(Node *root){
        int l = height(root->left);
        int r = height(root->right);
        
        return abs(l-r);
    }
    bool isBalanced(Node *root)
    {
        if(root== NULL){
            return true;
        }
        if(heights(root)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
