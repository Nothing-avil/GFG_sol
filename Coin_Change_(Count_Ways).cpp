class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        int n = coins.size();
        vector<int> p(sum + 1), c(sum + 1);
        for(int i = 0; i<sum + 1; i++){
            if(i%coins[0] == 0){
                p[i] = 1;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<sum + 1; j++){
                int nt = p[j];
                int t = 0;
                if(coins[i] <= j){
                    t = c[j - coins[i]];
                }
                c[j] = t + nt;
            }
            p=c;
        }
        return p[sum];
    }
};
