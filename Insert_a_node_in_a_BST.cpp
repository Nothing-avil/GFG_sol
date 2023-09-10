class Solution
{
    public:
    Node* insert(Node* node, int data) {
        if(node==NULL){
            node= new Node(data);
        }
        else{
            if(node->data>data){
                if(node->left==NULL){
                    node->left=new Node(data);
                }
                else{
                    insert(node->left, data);
                }
            }
            else if(node->data<data){
                if(node->right==NULL){
                    node->right=new Node(data);
                }
                else{
                    insert(node->right, data);
                }
            }
        }
        // return node;
    }

};
