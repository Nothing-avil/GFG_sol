struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return 1;
        }
        int sum=0;
        if(root->left!= NULL){
            sum+= root->left->data;
        }
        if(root->right){
            sum += root->right->data;
        }
        return (root->data==sum && isSumProperty(root->left)&&isSumProperty(root->right));
    }
};
