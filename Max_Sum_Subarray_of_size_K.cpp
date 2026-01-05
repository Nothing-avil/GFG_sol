class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr){
        int n = arr.size();
        long maxs=0, res=0;
        for(int i=0;i<k; i++){
            maxs+= arr[i];
        }
        res= max(res, maxs);
        for(int i=k;i<N; i++){
            maxs-=arr[i-k];
            maxs+=arr[i];
            res=max(res, maxs);
        }
        return res;
    }
};
