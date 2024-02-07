struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int ans=0;
    
    int solve(Node* root, int a, int b){
        if(root==NULL|| ans>0){
            return 0;
        }
        int l= solve(root->left, a, b);
        int r= solve(root->right, a, b);
        
        if(root->data==a || root->data==b){
            if(l!=0){
                ans=l;
            }
            else if(r!=0){
                ans=r;
            }
            else{
                return 1;
            }
        }
        if(l!=0 && r!=0){
            ans= l+r;
        }
        else if(l!=0){
            return l+1;
        }
        else if(r!=0){
            return r+1;
        }
        return 0;
    }
    
    int findDist(Node* root, int a, int b) {
        if(a==b){
            return 0;
        }
        solve(root, a,b);
        return ans;
    }
};
