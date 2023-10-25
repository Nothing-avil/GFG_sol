class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        int k[N+1][W+1];
        memset(k,0, sizeof(k));
        for(int i=1;i<=N; i++){
            for(int j=1;j<=W; j++){
                if(wt[i-1]<=j){
                    k[i][j]= max({k[i][j], val[i-1]+k[i][j-wt[i-1]]});
                }
                
                k[i][j]=max(k[i-1][j], k[i][j]);
            }
        }
        return k[N][W];
    }
};
