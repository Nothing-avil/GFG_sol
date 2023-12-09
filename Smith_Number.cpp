class Solution {
  public:
    int count(int n){
        int a=0;
        while(n>0){
            int x= n%10;
            a= a+ x;
            n=n/10;
        }
        return a;
    }
    int smithNum(int n) {
        int sum=count(n);
        int cp=0;
        int i=2;
        int x=n;
        while(i<n && x!=1){
            if(x%i==0){
                cp+=count(i);
                x=x/i;
            }
            else{
                i++;
            }
        }
        return sum==cp;
        
    }
};
