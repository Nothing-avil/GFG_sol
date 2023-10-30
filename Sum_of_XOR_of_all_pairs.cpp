class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        long long int c=0;
        for(int i=0; i<32; i++){
            int z=0;
            int o=0;
            for(int j=0; j<n; j++){
                if(arr[j]%2==1)
                    o++;
                else
                    z++;
                    
                arr[j]=arr[j]/2;
            }
            c+= pow(2, i)*z*o;
        }
        return c;
    }
};
