class Solution {
  public:
  
  map<int, pair<int,int>> mp;
  
  void solver(int i, int l, Node* root){
      if(!root){
          return;
      }
      if(l >= mp[i].second){
          mp[i] = {root->data, l};
      }
      solver(i-1, l+1, root->left);
      solver(i+1, l+1, root->right);
  }
  
    vector <int> bottomView(Node *root) {
        solver(0, 0, root);
        vector<int> res;
        for(auto i: mp){
            res.push_back(i.second.first);
        }
        return res;
    }
};
