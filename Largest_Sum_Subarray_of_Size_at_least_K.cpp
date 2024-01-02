class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k){
        long long int res=0;
        long long int i=0, j=-1, maxs=-1000000, last=0;
        while(i<n){
            res+=a[i];
            if(i>=k-1){
                if(maxs<res){
                    maxs=res;
                }
                if(j!=-1){
                    last+=a[j];
                }
                if(last<0){
                    res-=last;
                    if(maxs<res){
                        maxs=res;
                    }
                    last=0;
                }
                j++;
            }
            i++;
        }
        return maxs;
    }
};
