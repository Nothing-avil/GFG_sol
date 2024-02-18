struct Node{
    int data;
    Node *left,*right;
}; */


class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
            if(root==NULL){
                return 0;
            }
            if(root->left ==NULL && root->right==NULL){
                return root->data;
            }
            int left= sumOfLeafNodes(root->left);
            int right= sumOfLeafNodes(root->right);
            return left+right;
        }
};
