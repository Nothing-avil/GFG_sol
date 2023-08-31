int Inordertraversal(Node* root, vector<int>& result) 
{
    if (root == nullptr) 
    {
        return 0;
    }

    Inordertraversal(root->left, result);
    result.push_back(root->data);
    Inordertraversal(root->right, result);

    return 0;
}

Node* newNode(int data) 
{
    Node* node = new Node(data);
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* constructBSTFromSortedArray(vector<int>& result, int start, int end) 
{
    if (start > end) 
    {
        return nullptr;
    }

    int mid = (start + end) / 2;
    Node* root = newNode(result[mid]);
    root->left = constructBSTFromSortedArray(result, start, mid - 1);
    root->right = constructBSTFromSortedArray(result, mid + 1, end);

    return root;
}

Node* deleteNode(Node* root, int data) 
{
    vector<int> result;
    Inordertraversal(root, result);

    int size = result.size();
    int indexToDelete = -1;
    for (int i = 0; i < size; i++) 
    {
        if (result[i] == data) 
        {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete == -1) 
    {
        return root;
    }

    result.erase(result.begin() + indexToDelete);
    Node* newRoot = constructBSTFromSortedArray(result, 0, result.size() - 1);
    return newRoot;
}
