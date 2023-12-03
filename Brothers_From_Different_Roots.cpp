class Solution
{
public:
    void inorder(Node* root, unordered_set<int> &s){
        if(!root){
            return;
        }
        inorder(root->left, s);
        s.insert(root->data);
        inorder(root->right, s);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_set<int> s1, s2;
        int res=0;
        inorder(root1, s1);
        inorder(root2, s2);
        for(auto &it: s1){
            if(s2.count(x-it)){
                res++;
            }
        }
        return res;
    }
};
