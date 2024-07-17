struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        vector<Node*>node;
        int n=parent.size();
        for(int i=0; i<n; i++){
            node.push_back(new Node(i));
        }
        
        Node* root=NULL;
        
        for(int i=0; i<n; i++){
            if(parent[i] == -1){
                root = node[i];
            }
            else{
                if(!node[parent[i]]->left){
                    node[parent[i]]->left = node[i];
                }
                else{
                    node[parent[i]]->right = node[i];
                }
            }
        }
        return root;
    }
};
