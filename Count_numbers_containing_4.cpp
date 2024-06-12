class Solution {
  public:
  
  bool solver(int i){
      string str= to_string(i);
      if(str.find('4')!= string::npos){
          return true;
      }
      return false;
  }
  
    int countNumberswith4(int n) {
        int c=0;
        for(int i=1;i<=n; i++){
            if(solver(i)){
                c++;
            }
        }
        return c;
    }
};
