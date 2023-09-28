class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        for(int i=0; i<n-1;){
            if(arr[i]<=arr[i+1]){
                swap(arr[i], arr[i+1]);
                i=i+2;
            }
        }
    }
};
