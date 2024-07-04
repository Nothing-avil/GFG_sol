class Solution {
  public:
  
  string helper(Node *root, vector<Node*> &ans, 
                unordered_map<string,int> &mp)
    {
        string temp = "";
        if(root == NULL)
            return "#";
        temp += to_string(root->data);
        temp += helper(root->left,ans,mp);
        temp += helper(root->right,ans,mp);
        if(mp[temp] == 1)
            ans.push_back(root);
        mp[temp]++;
        return temp;
        
    }
    vector<Node*> printAllDups(Node* root) {
        // unordered_map<string, int> mp;
        // vector<Node*> ans;
        // function<string(Node*)> solver = [&](Node* t){
        //   if(!t){
        //       return "$";
        //   }
        //   string str = "";
        //   str += to_string(t->data);
        //   str+="#";
        //   str+= solver(t->left);
        //   str+= "#";
        //   str+= solver(t->right);
        //   str+= "#";
          
        //   mp[str]++;
        //   if(mp[str]==2){
        //       ans.push_back(t);
        //   }
          
        //   return str;
        // };
        // solver(root);
        // return ans;
        
        vector<Node*> ans;
        unordered_map<string,int> mp;
        helper(root,ans,mp);
        return ans;
        // Code here
    }
};
