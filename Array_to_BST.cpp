/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};
*/

class Solution {
  public:
  
    Node* sortedArrayToBST(vector<int>& nums, int start, int end){
        if (start > end){
            return NULL;
        }
            
        int mid = (start + end) / 2;
        Node* root = new Node(nums[mid]);
        root->left = sortedArrayToBST(nums, start, mid - 1);
        root->right = sortedArrayToBST(nums, mid + 1, end);
        return root;
    }
  
    Node* sortedArrayToBST(vector<int>& nums) {
        int n= nums.size();
        return sortedArrayToBST(nums, 0, n-1);
    }
};
