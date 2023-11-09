class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int count=0;
        int maxi=-1;
        int index;
        int check=0;
        for(int i=N-1;i>-1;i--){
            count=0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0)
                count++;
                else 
                check++;
            }
            if(maxi<=count){
                maxi=count;
                index=i;
            }
        }
        
        if(check>=N*N)
        return -1;
        else
        return index;
    }
};
