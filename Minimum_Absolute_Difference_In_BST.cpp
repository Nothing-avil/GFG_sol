struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution
{
    public:
    vector<int> res;
    void order(Node *root){
        if(root==NULL){
            return;
        }
        order(root->left);
        res.push_back(root->data);
        order(root->right);
    }
    
    int absolute_diff(Node *root)
    {
        int ans=INT_MAX;
        order(root);
        for(int i=1; i<res.size(); i++){
            ans= min(ans, abs(res[i]-res[i-1]));
        }
        return ans;
    }
};
