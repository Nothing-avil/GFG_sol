/*struct NodeGiven a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes. A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    bool height(Node* root, int k){
        if(!root){
            return false;
        }
        if(!root->left && !root->right){
            if(k==0){
                return true;
            }
            return false;
        }
        if(height(root->left, k-1) || height(root->right, k-1)){
            return true;
        }
        return false;
    }
    
    int go(Node* root, int k){
        if(!root){
            return 0;
        }
        if(height(root, k)){
            return 1+go(root->left, k)+go(root->right, k);
        }
        return go(root->left, k)+ go(root->right, k);
    }
    
    int printKDistantfromLeaf(Node* root, int k)
    {
        return go(root, k);
    }
};
