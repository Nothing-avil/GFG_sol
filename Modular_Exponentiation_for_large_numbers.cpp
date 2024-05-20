class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int res=1;
		    while(n!=0){
		         if(n%2==1){
		             res=(res*x)%M;
		         }
		         x= (x*x)%M;
		         n=n/2;
		    }
		    return res;
		}
};
