
class Solution{
  public:
    /*You are required to complete this method */
    Node* RL(Node* p) {
        Node* rchildp = p->right;
        Node* lchild_rchildp = rchildp->left;
        Node* lchild_lchild_rchildp = lchild_rchildp->left;
        Node* rchild_lchild_rchildp = lchild_rchildp->right;
        lchild_rchildp->left = p;
        lchild_rchildp->right = rchildp;
        rchildp->left = rchild_lchild_rchildp;
        p->right = lchild_lchild_rchildp;
        return lchild_rchildp;
    }
    Node* RR(Node* p) {
        Node* lchildp = p->left;
        Node* rchild_lchildp = lchildp->right;
        lchildp->right = p;
        p->left = rchild_lchildp;
        return lchildp;
    }
    Node* LL(Node* p) {
        Node* rchildp = p->right;
        Node* lchild_rchildp = rchildp->left;
        rchildp->left = p;
        p->right = lchild_rchildp;
        return rchildp;
    }
    Node* LR(Node* p) {
        Node* lchildp = p->left;
        Node* rchild_lchildp = lchildp->right;
        Node* lchild_rchild_lchildp = rchild_lchildp->left;
        Node* rchild_rchild_lchildp = rchild_lchildp->right;
        rchild_lchildp->left = lchildp;
        lchildp->right = lchild_rchild_lchildp;
        rchild_lchildp->right = p;
        p->left = rchild_rchild_lchildp;
        return rchild_lchildp;
    }
    int height(Node* p) {
        if (p == NULL) {
            return 0;
        }
        int x = height(p->left);
        int y = height(p->right);
        return max(x,y) + 1;
    }
    int BalanceFactor(Node* p) {
        return height(p->left) - height(p->right);
    }
    Node* insertToAVL(Node* node, int data)
    {
                if (node == NULL) {
            Node* nn = new Node(data);
            return nn;
        }
        if (node->data < data) {
            node->right = insertToAVL(node->right, data);
        } else {
            node->left = insertToAVL(node->left, data);
        }
        
        int BFN = BalanceFactor(node);
        int BFNL = 0, BFNR = 0;
        
        if (BFN == 2) {
            BFNL = BalanceFactor(node->left);
        }
        if (BFN == -2) {
            BFNR = BalanceFactor(node->right);
        }
        if (BFN == 2 && BFNL == 1){
            return RR(node);
        }
        if (BFN == 2 && BFNL == -1){
            return LR(node);
        }
        if (BFN == -2 && BFNR == -1){
            return LL(node);
        }
        if (BFN == -2 && BFNR == 1){
            return RL(node);
        }
        
        return node;
    }

};
