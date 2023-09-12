class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N==1){
            return 0;
        }
        long long i, sum=0;
        for(i=1; i <=sqrt(N); i++){
            if(N%i==0){
                sum=sum+i;
                if(i*i!=N && N/i!=N){
                    sum=sum+N/i;
                }
            }
        }
        if(sum==N){
            return 1;
        }
        return 0;
    }
};
