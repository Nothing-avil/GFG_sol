class Solution {
  public:
    int swapNibbles(int n) {
        int a= n/16;
        int r= n%16;
        
        return r*16+a;
    }
};
