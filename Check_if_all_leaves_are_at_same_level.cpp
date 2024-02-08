struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        int maxs=-1;
        return f(root,0,maxs);
    }
    bool f(Node * root,int height,int &prevDepth){
        if(!root) return true;
        if(!root->left and !root->right){
             if(prevDepth==-1){
                 prevDepth=height;
                 return true;
             }
             else if(prevDepth==height) return true;
             return false;
        }
        if(f(root->left,height+1,prevDepth)==false) return false;
        if(f(root->right,height+1,prevDepth)==false) return false;
        return true;
    }
};
