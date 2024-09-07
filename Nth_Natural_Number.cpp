class Solution {
  public:
    long long findNth(long long n) {
        long long res=1;
        long long sum =0;
        while(n>0){
            sum+= res*(n%9);
            n/=9;
            res*=10;
        }
        return sum;
    }
};
