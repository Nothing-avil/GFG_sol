class Solution
{
private:

public:

    private:

Node* getTargetNode(Node* root,int target,unordered_map<Node*,Node*> &parent){
    
    queue<Node*> q;
    q.push(root);
    
    Node* targetNode = NULL;
    
    while(!q.empty()){
        
        Node *current=q.front();
        
        q.pop();
        
        if(current->data == target) targetNode = current;
        
        if(current->left!=NULL){
            parent[current->left]=current;
            q.push(current->left);
        }
        
        if(current->right!=NULL){
            parent[current->right]=current;
            q.push(current->right);
        }
    }
    
    return targetNode;
    
}

public:

vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        unordered_map<Node*,Node*> parent;
        
        vector<int> ans;
        if(!root) return ans;
        
        Node* targetNode = getTargetNode(root, target, parent);
        
        unordered_map<Node*,bool> vis;
        
        queue<Node*> q;
   
        q.push(targetNode);
        vis[targetNode]=true;
        
        int curr_level=0;
        
        while(!q.empty()){
            int size=q.size();
            
            if(curr_level++ ==k){
                break;
            }
            
            for(int i=0;i<size;i++){
                Node *current=q.front();
                q.pop();
                
                if(current->left && !vis[current->left]){
                    vis[current->left]=true;
                    q.push(current->left);
                }
                if(current->right && !vis[current->right]){
                    vis[current->right]=true;
                    q.push(current->right);
                }
                if(parent[current] && !vis[parent[current]]){
                    vis[parent[current]]=true;
                    q.push(parent[current]);
                }
            }
        }
        
    while(!q.empty()){
        ans.push_back(q.front()->data);
        q.pop();
    }
    
    sort(ans.begin(),ans.end());
    return ans;
    }
};
