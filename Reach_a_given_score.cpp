class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
        long long int s=0;
        for(long long int i=0; i<=n; i+=3){
            s+= (n-i)%5==0?(n-i)/10+1:0;
        }
        return s;
    }
};
