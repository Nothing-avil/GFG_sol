struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  
    bool solver(Node* root, int &sum){
        if(root==NULL)return true;
        if(root->left==NULL && root->right==NULL){
            sum+=root->data;
            return true;
        }
        
        bool left= solver(root->left,sum);
        bool right = solver(root->right,sum);
        
        if(!left || !right)return false;
        if(root->data==sum){
            sum+=root->data;
            return true;
        }
        else return false;
    }
  
    bool isSumTree(Node* root) {
        if(root==NULL)return true;
        int sum1=0;
        int sum2=0;
        bool l= solver(root->left,sum1);
        bool r= solver(root->right,sum2);
       
        if(l&&r&& root->data==sum1+sum2)return true;
        return false;
    }
};
