void printCorner(Node *root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
       int n=q.size();
       for(int i=1;i<=n;i++){
           Node *t=q.front();
           q.pop();
           if(i==1 || i==n) cout<<t->data<<" ";
           if(t->left!=NULL) q.push(t->left);
           if(t->right!=NULL) q.push(t->right);
       }
    }
}
