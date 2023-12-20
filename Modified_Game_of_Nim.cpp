class Solution{
public:
    int findWinner(int n, int A[]){
        int res = 0 ;
        for(int idx = 0 ; idx < n ; idx++){
            res ^= A[idx];
        }
        if(res == 0)
         return 1;
         return (n & 1)?2:1;
    }
};
