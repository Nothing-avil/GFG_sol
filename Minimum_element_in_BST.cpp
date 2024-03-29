class Solution {
public:   
    int res=INT_MAX;
    void solve(Node* root){
        if(root==NULL){
            return;
        }
        res= min(res, root->data);
        solve(root->left);
        solve(root->right);
    }
    int minValue(Node* root) {
        if(root->left==NULL){
            return root->data;
        }
        solve(root->left);
        return res;
    }
};
