class Solution
{
  public:
    int minOperation(int n)
    {
        int c=0;
        while(n>1){
            if(n%2!=0){
                n--;
                c++;
            }
            if(n%2==0){
                n=n/2;
                c++;
            }
        }
        return c+1;
    }
};
