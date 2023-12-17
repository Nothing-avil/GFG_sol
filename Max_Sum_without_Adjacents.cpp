class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    if(n==1){
            return arr[0];
        }
        int a =arr[0];
        int b=max(a,arr[1]);
        for(int i =2;i<n;i++){
            int c = max(b,a+arr[i]);
            a=b;
            b=c;
        }
        return b;
	}
};
