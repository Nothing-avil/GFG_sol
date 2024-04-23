class Solution {
  public:
    const int mod= 1e9+7;
    int firstElement(int n) {
        int a00=1 , a01=1, a10=1, a11=0;
        for(int i=1;i<n;i++){
            int preva00= a00;
            int preva10 = a10;
            a00= (a00*1 + a01*1)%mod;
            a01= preva00;
            a10=a01;
            a11= preva10;
        }
        
        return a10;
    }
};
