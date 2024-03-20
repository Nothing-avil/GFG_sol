/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    int ans = 0;
    int maxLength = 0;
    
    int maxLen(Node *root)
    {
        if(root == NULL) return 0;
        
        int left = maxLen(root->left) ;
        int right = maxLen(root->right);
        return max(left, right) + 1;
    }
    
    void maxSum(Node* root, int len, int sum)
    {
        if(root == NULL) return;
        sum = sum + root->data;
        if(len == maxLength)
        {
            ans = max(ans, sum);
        }
        maxSum(root->left, len+1, sum);
        maxSum(root->right, len+1, sum);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        maxLength = maxLen(root);
        maxSum(root, 1, 0);
        return ans;
    }
};
