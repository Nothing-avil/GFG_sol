struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/


vector<int> fun(Node* root,int &mx){
    if(root->left==NULL&&root->right==NULL)return {root->data,root->data,1};
    if(root->right==NULL){
        auto ls=fun(root->left,mx);
        if(ls[2]&&ls[1]<root->data){
            mx=max(mx,ls[2]+1);
            return {min(ls[0],root->data),max(ls[1],root->data),ls[2]+1};
        }
    }
    else if(root->left==NULL){
         auto ls=fun(root->right,mx);
        if(ls[2]&&ls[0]>root->data){
            mx=max(mx,ls[2]+1);
            return {min(ls[0],root->data),max(ls[1],root->data),ls[2]+1};
        }
    }
    else{
          auto ls=fun(root->left,mx);
          auto rs=fun(root->right,mx);
           if(ls[2]&&rs[2]&&ls[1]<root->data&&root->data<rs[0]){
            mx=max(mx,ls[2]+rs[2]+1);
            return {min(ls[0],root->data),max(rs[1],root->data),ls[2]+rs[2]+1};
        }
    }
    return {0,0,0};
}
class Solution{
    public:
    int largestBst(Node *root)
    {
        int mx=1;
        auto k=fun(root,mx);
        return mx;
    }
};
