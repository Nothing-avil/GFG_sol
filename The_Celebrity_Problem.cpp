class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n=mat.size();
        int res = -1;
        int count1 = 0;
        int count2 = 0;
        for(int i=0 ; i<n ; i++){
            for (int j=0 ; j<n ; j++){
                    count1+=mat[i][j];
                    count2+=mat[j][i];
            }
            if (count1 == 0 && count2==n-1){
                res = i;
            }
            count1=0;
            count2=0;
        }
        return res;
    }
};
