class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        long long a=1, i=0;
        long long b=1;
        long long c=0;
        vector<long long> p;
        while(i<n){
            c=a+b;
            p.push_back(a);
            a=b;
            b=c;
            i++;
        }
        return p;
    }
};
