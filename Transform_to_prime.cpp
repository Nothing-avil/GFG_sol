class Solution{
    public:
    bool check(int n){
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int minNumber(int arr[],int N){
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=arr[i];
        }
        if(sum==1){
            return 1;
        }
        int i=0;
        while(true){
            if(check(sum+i)){
                return i;
            }
            i++;
        }
        return 0;
    }
};
