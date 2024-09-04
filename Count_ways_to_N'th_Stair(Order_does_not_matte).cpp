class Solution{
	public:
		int nthStair(int n){
		   int res=1;
		   while(n>1){
		       res++;
		       n-=2;
		   }
		   return res;
		}
};
