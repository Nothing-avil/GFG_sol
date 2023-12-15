class Solution{
	public:
	    int mod= 1e9+7;
		int nthPoint(int n){
		    int s=1;
		    int l= 1;
		    int res=0;
		    for(int i=2; i<=n; i++){
		        res= (s+l)%mod;
		        s=l;
		        l=res;
		    }
		    return l;
		}
};
