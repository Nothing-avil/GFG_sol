class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        int n=arr.size();
        int count=0,i,j;
        for(i=0;i<n;i++){
           for(j=0;j<n/2;j++){
               if(arr[i][j]==arr[i][n-1-j]){
                   count++;
               }
           }
           if(count==n/2)
             return to_string(i)+" R";
            count=0;
        }
        for(i=0;i<n;i++){
           for(j=0;j<n/2;j++){
               if(arr[j][i]==arr[n-j-1][i]){
                   count++;
               }

           }
           if(count==n/2)
             return to_string(i)+" C";
           count=0;
        }
        return "-1";
    }
};
