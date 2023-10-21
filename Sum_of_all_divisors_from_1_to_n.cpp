class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long res=0;
        for(int i=1; i<=N; i++){
            res= res+ (i*(N/i));
        }
        return res;
    }
};
