class Solution
{
    public:
        int maxSum(int n)
        {
            return (n == 0) ? 0 : max(maxSum(n / 2) + maxSum(n / 3) + maxSum(n / 4), n);
        }
};
