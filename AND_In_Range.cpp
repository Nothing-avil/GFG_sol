class Solution {
  public:
    int andInRange(int l, int r) {
        if(l == r){
            return l;
        }
        int diff = r-l;
        int ans = 0;
        for(int i = 0;i<=32;i++){
            int mask = 1<<i;
            int lbit = mask&l;
            int rbit = mask&r;
            if(lbit == mask && rbit == mask && diff<mask){
                ans += mask;
            }
        }
        return ans;
    }
};
