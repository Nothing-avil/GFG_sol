class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        int maxs=arr[0], a=0;
        for(int i=1; i<n; i++){
            int remain= max(maxs, a+arr[i]);
            a=maxs;
            maxs = remain;
        }
        return maxs;
    }
};
