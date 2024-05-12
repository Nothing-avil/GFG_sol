class Solution {
  public:
    int minSteps(int d) {
        int r=0;
        int ss=0;
        while(r!=d){
            r+=ss;
            if(r==d){
                return ss;
            }
            else if(r>d){
                int t=r-d;
                if(t%2==0){
                    break;
                }
            }
            ss++;
        }
        return ss;
    }
};
