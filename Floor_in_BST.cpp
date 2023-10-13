class Solution{

public:
    int floor(Node* root, int x) {
        int ans = -1 ;
        Node * node = root;
        while(node != NULL) {
            if(node -> data <= x) {
                ans = max(ans , node -> data);
                node = node -> right;
            }
            else node = node -> left;
        }
        return ans;
    }
};
