// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int c=arr[0];
        int res=0;
        for(int i=0; i<n; i++){
            if(arr[i]>c){
                c=arr[i];
                res=i;
            }
        }
        return res;
    }
};
