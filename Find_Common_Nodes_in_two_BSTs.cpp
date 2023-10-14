class Solution
{
    public:
    //Function to find the nodes that are common in both BST.
    void inorder(vector<int> &a, Node *t){
        if(!t){
            return;
        }
        inorder(a, t->left);
        a.push_back(t->data);
        inorder(a, t->right);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
        vector<int> one, two, res;
        inorder(one, root1);
        inorder(two, root2);
        int i=0, j=0;
        while(i < one.size() && j < two.size()){
            if(one[i] == two[j]){
                res.push_back(one[i]);
                i++;
                j++;
            } else if(one[i] < two[j]){
                i++;
            } else{
                j++;
            }
        }
        
        return res;
    }
};
