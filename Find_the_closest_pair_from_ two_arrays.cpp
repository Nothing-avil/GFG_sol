class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        if(x>= arr[n-1]+brr[m-1]){
            return {arr[n-1], brr[m-1]};
        }
        int resi=0, resj=0;
        int i=0, j=m-1, mini= INT_MAX;
        while(i<n && j>=0){
            if(abs(arr[i]+brr[j]-x)< mini){
                resi=i;
                resj=j;
                mini=abs(arr[i]+brr[j]-x);
            }
            if (arr[i] + brr[j] > x) {
                j--;
            } else {
                i++;
            }
        }
        return {arr[resi], brr[resj]};
    }
};
