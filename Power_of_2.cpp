class Solution{
    public:
    bool isPowerofTwo(long long n){
        if(n==0){
            return 0;
        }
        int a=log2(n);
        
        return (n==pow(2,a));
    }
};
