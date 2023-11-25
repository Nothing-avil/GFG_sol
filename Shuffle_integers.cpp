class Solution{
	public:
	void shuffleArray(int a[],int n)
	{
	   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	    int mod = 1e4;
        for(int i=2, j=1; i<n; i+=2, j++) 
            a[i] = (a[j] % mod) * mod + a[i];
        for(int i=1, j=n/2; i<n; i+=2, j++)
            a[i] = (a[j] % mod) * mod + a[i];
        for(int i=1;i<n;i++)
            a[i] = a[i] / mod;
	}
};
