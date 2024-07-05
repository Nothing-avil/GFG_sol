class Solution {
  public:
    // // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        int sanday=0;
        int lendy=0;
        function<void(Node*, int)> calculate = [&](Node*st, int d){
            if(!st) return;
            sanday=min(d,sanday);
            lendy=max(d,lendy);
            calculate(st->left, d-1);
            calculate(st->right, d+1);
        };
        if(!root) return 0;
        calculate(root, 0);
        return lendy-sanday+1;
    }
};
