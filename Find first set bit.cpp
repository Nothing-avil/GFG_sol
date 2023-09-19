class Solution
{
    public:
    
    unsigned int getFirstSetBit(int n)
    {
        if(n==0){
            return 0;
        }
        if(n%2!=0){
            return 1;
        }
        return (1+getFirstSetBit(n/2));
    }
};
