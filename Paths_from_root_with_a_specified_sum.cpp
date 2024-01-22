class Solution
{
    public:
    void solve(Node* root, vector<int> tmp, vector<vector<int>>& ans, int sum){
        if(!root) return;
        tmp.push_back(root -> key);
        if(sum - (root -> key) == 0)
            ans.push_back(tmp);
        solve(root -> left, tmp, ans, sum - root -> key);
        solve(root -> right, tmp, ans, sum - root -> key);
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<vector<int>> ans;
        vector<int> tmp;
        solve(root, tmp, ans, sum);
        return ans;
    }
};
