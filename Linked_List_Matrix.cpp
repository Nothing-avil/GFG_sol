/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<Node* >> vec(n, vector<Node* >(m));
        for(int i = 0; i<n  ; i++){
            for(int j = 0; j<m; j++){
                vec[i][j] = new Node(mat[i][j]);
            }
        }
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m-1; j++){
                vec[j][i]->down = vec[j+1][i];
                vec[i][j]->right = vec[i][j+1];
            }
        }
        return vec[0][0];
    }
};
