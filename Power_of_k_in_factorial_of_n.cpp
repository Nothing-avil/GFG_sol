class Solution {
  public:
    int maxKPower(int n, int k) {
        unordered_map<int,int>prime;
        int i=2;
        while(i*i<=k){
            while(k%i==0){
                prime[i]++;
                k/=i;
            }
            i++;
        }
        if (k > 1) prime[k]++;
        int result = INT_MAX;
        for (auto it : prime) {
            int p = it.first;
            int a = it.second;
            int count = 0;
            int power = p;
    
            while (power <= n) {
                count += n / power;
                power *= p;
            }
    
            int x = count / a;
            result = min(result, x);
        }
    
        return result;
    }
};
