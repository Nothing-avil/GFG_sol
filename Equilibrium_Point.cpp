class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1){
            return 1;
        }
        long long sum1=0, sum=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        for(int i=0; i<n-1; i++){
            sum+=a[i];
            if(sum==sum1){
                return i+1;
            }
            sum1-=a[i];
        }
        return -1;
    }

};
