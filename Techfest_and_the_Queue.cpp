class Solution {
public:
    int solve(int n){
        int c=0;
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                c++;
                n=n/i;
            }
        }
        if(n!=1){
            c++;
        }
        return c;
    }
	int sumOfPowers(int a, int b){
	    int sum=0;
	    for(int i=a; i<=b; i++){
	        sum= sum+ solve(i);
	    }
	    return sum;
	}
};
