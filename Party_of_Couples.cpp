class Solution{
    public:
    int findSingle(int n, int arr[]){
        int res=0;
        for(int i=0; i<n; i++){
            res^=arr[i];
        }
        return res;
    }
};
