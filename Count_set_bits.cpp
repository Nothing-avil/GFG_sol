class Solution {
  public:
    int countSetBits(int n) {
        int limit = log2(n);
        int ans=0;
        for (int idx=0; idx<=limit; idx++) {
            int pattern = (1<<(idx+1));
            int noOfCycles = (n+1)/pattern;
            int noOfOnes = noOfCycles*(pattern/2);
            ans += noOfOnes;
            int remain = (n+1)%pattern;
            remain -= (pattern/2);
            if (remain>0) ans += remain;
        }
        return ans;
    }
};
