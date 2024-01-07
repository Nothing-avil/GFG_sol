class Solution {
  public:
   int nofmaxsubarray( int arr[], int mid,int N)
    {
        int count=1;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            if(sum+arr[i]>mid)
            {
                count++;
                sum=arr[i];
            }
            else 
                sum=sum+arr[i];
        }
        return count;
    }
    int splitArray(int arr[] ,int N, int K) {
        int* max = max_element(arr, arr + N);
        int low = *max; 
        int high=0;
        for( int i=0;i<N;i++)
        { 
            high+=arr[i];
        }
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int n=nofmaxsubarray(arr,mid,N);
            if(n>K)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
