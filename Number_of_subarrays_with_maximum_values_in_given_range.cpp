class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        long long ans = 0, l = 0, r = 0, check = 0, ll = 0;
        for (int i=0;i<n;i++){
            if (a[i]>R) check = 0, l = i+1;
            else if (a[i]>=L) check = 1, ll = i;
            if (check) ans += ll-l+1;
        }
        return ans;
    }
};
