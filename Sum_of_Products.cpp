class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        long long ans = 0;
        for(int i = 0;i<64;i++){
            long long set = 0;
            for(int j = 0;j<n;j++){
                (((arr[j] >> i) &1) == 1) ? set+=1 : set;  
            }
            long long tCom = set*(set-1)/2;
            ans += pow(2,i)*tCom;
        }
        return ans;
    }
};
