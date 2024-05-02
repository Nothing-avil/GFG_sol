struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void inorder(Node* root, vector<int>& v) {
        if (root == nullptr) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    vector<int> serialize(Node *root) {
        vector<int> v;
        inorder(root, v);
        return v;
    }
    Node* buildtree(vector<int>& v, vector<int>::iterator start, vector<int>::iterator end) {
        if (start == end) return nullptr;
        auto mid = start + (end - start) / 2;
        Node* root = new Node(*mid);
        root->left = buildtree(v, start, mid);
        root->right = buildtree(v, mid + 1, end);
        return root;
    }
    Node* deSerialize(vector<int>& v) {
        return buildtree(v, v.begin(), v.end());
    }

};
