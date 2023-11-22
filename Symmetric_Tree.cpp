class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isEqual(struct Node* root1, struct Node* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        else if(root1 == NULL || root2 == NULL){
            return false;
        }
        else if(root1->data != root2->data){
            return false;
        }
        bool pair1 = isEqual(root1->right, root2->left);
        bool pair2 = isEqual(root1->left, root2->right);
        return (pair1&pair2);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root == NULL){
	        return true;
	    }
	    return isEqual(root->left,root->right);
    }
};
