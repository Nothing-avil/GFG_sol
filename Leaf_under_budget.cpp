void traversal(Node* root, int steps, vector<int> &res){
        
        if(!root) return;
        
        if(!root->left && !root->right) res.push_back(steps);
        
        traversal(root->left, steps + 1, res);
        traversal(root->right, steps + 1, res);
    }
public:
    int getCount(Node *root, int k)
    {
        vector<int> res;
        traversal(root, 1, res);
        
        sort(res.begin(), res.end());
        int cnt = 0;
        
        for(auto cost : res){
            if(cost <= k){
                cnt += 1;
                k -= cost;
            }
        }
        return cnt;
    }
