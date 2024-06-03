class Solution {
  public:
  
    const int mood= 1e9+7;
  
    int numberOfConsecutiveOnes(int n) {
        if(n==2){
            return 1;
        }
        int po=1;
        int x=0, y=1;
        for(int i=3; i<=n; i++){
            int c= (x+y)%mood;
            x = y;
            y=c;
            po= ((po*2)%mood + c)%mood;
        }
        return po;
    }
};
