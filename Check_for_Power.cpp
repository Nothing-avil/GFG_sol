class Solution {
  public:
    bool isPower(int x, int y) {
         if(x==1){
            return y==1;
        }
        while(y%x==0){
            y=y/x;
        }
        return y==1;
    }
};
