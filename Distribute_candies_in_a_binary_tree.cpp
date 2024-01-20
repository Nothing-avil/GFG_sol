class Solution
{
    public:
    
    int solve(Node* root, int &moves) {
        if(root == NULL) {
            return 0;
        }
        
        int l = solve(root->left, moves);
        int r = solve(root->right, moves);
        
        int total_extra_candies = (l + r + root->key) - 1;
        
        moves += abs(l) + abs(r);
        
        return total_extra_candies;
    }
    
    int distributeCandy(Node* root) {
        int moves = 0;
        if(!root->left && !root->right) {
            return 0;
        }
        solve(root, moves);
        
        return moves;
    }
};
