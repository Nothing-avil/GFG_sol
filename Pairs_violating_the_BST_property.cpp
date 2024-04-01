/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
int merge(vector<int>& nodes, int l, int mid, int r) {
        int inv = 0;
        int n1 = mid - l + 1;
        int n2 = r - mid;
        
        int a[n1], b[n2];
        
        for(int i=0; i<n1; i++) {
            a[i] = nodes[i+l];
        }
        
        for(int j=0; j<n2; j++) {
            b[j] = nodes[j+mid+1];
        }
        
        int i=0, j=0, k=l;
        
        while(i < n1 && j < n2) {
            if(a[i] <= b[j]) {
                nodes[k] = a[i];
                i++;
            } else {
                nodes[k] = b[j];
                inv += n1 - i;
                j++;
            }
            k++;
        }
        
        while(i < n1) {
            nodes[k] = a[i];
            i++; k++;
        }
        
        while(j < n2) {
            nodes[k] = b[j];
            j++; k++;
        }
        
        return inv;
    }
    
    int mergeSort(vector<int>& nodes, int l, int r) {
        int inv = 0;
        if(l < r) {
            int mid = (l+r)/2;
            inv += mergeSort(nodes, l, mid);
            inv += mergeSort(nodes, mid+1, r);
            inv += merge(nodes, l, mid, r);
        }
        return inv;
    }
      
    void inorder(Node* root, vector<int>& nodes) {
        if(root == NULL) {
            return;
        }
        
        inorder(root -> left, nodes);
        nodes.push_back(root -> data);
        inorder(root -> right, nodes);
    } 
    int pairsViolatingBST(int n, Node *root) {
        vector<int> nodes;
        inorder(root, nodes);
        int inversionCnt = 0;
        inversionCnt = mergeSort(nodes, 0, n-1);
        
        return inversionCnt;
    }
};
