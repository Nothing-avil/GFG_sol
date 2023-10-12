class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    map<string, int>mp;
 string solve(Node* root){
        if(!root) return "$";
        string s="";
        if(!root->right and !root->left){
            s+=to_string(root->data);
            return s;
        }
        s+=to_string(root->data);
        s+='/';
        s+=solve(root->left);
        s+=solve(root->right);
        mp[s]++;
        return s;
    }
    int dupSub(Node *root) {
        solve(root);
        for(auto it:mp)
        if(it.second>=2) return true;
        return false;
    }
};
