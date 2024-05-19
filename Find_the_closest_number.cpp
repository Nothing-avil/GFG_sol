class Solution{
    public:
    int findClosest( int n, int k,int arr[]){
        int val =lower_bound(arr, arr+n, k)-arr;
        if(arr[val]==k){
            return k;
        }
        if(val>0){
            if(k - arr[val-1] < arr[val]-k){
                return arr[val-1];
            }else{
                return arr[val];
            }
        }
        return arr[val];
    }
};
