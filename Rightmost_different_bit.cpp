class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n) return -1;
        int num = m^n;
        int ans=1;
        while(num>0) {
            if(num&1) {
                return ans;
            }
            num = num>>1;
            ans++;
        }
        return ans;
    }
};
