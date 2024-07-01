class Solution {
  public:
    TreeNode* createTree(vector<int> &v, int n, int idx){
        if(idx >= n){
            return NULL;
        }
        
        TreeNode* node = new TreeNode(v[idx]);
        
        node->left = createTree(v, n, 2*idx + 1);
        node->right = createTree(v, n, 2*idx + 2);
        
        return node;
    }
  
    void convert(Node *head, TreeNode *&root) {
        vector<int> v;
        
        Node* node = head;
        
        while(node != NULL){
            v.push_back(node->data);
            node = node->next;
        }
        
        int n = v.size();
        
        root = createTree(v, n, 0);
    }
};
