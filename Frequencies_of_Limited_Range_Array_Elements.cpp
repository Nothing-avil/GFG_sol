class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {
        int x[N]={0};
        for(int i=0; i<N; i++){
            if(arr[i]<=N){
                x[arr[i]-1]+= P;
            }
            else{
                arr[i]=0;
            }
        }
        for(int i=0; i<N;i++){
            arr[i] = x[i]/P;
        }
    }
};
