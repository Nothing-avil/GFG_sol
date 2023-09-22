class Solution
{
    public:
    vector<int> find(int arr[], int n , int k )
    {
        vector<int> ans(2,-1);
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                ans[0]=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==k){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};
