class Solution {
  public:
    int gameOfXor(int n , int a[]) {
        int res=0;
        for(int i=0; i<n; i++){
            if((i+1)%2 && (n-i)%2){
                res^=a[i];
            }
        }
        return res;
    }
};
