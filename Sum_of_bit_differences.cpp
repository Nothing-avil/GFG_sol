class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    long long sum=0;
	    for(int i=31; i>=0; i--){
	        long long a=0;
	        for(int j=0; j<n; j++){
	            a+=(arr[j]>>i)&1;
	        }
	        sum+= 2*a*(n-a);
	    }
	    return sum;
	}
};
