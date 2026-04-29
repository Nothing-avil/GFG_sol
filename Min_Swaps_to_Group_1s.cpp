class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        int count=0,n=arr.size();
        for(auto i:arr)if(i==1)count++;
        if(count==0)return -1;
        if(count==1)return 0;
        int countZero=0;
        for(int i=0;i<count;i++)if(arr[i]==0)countZero++;
        int i=0,j=count-1;
        int ans=countZero;
        while(j+1<n){
            if(arr[i]==0)countZero--;
            if(arr[j+1]==0)countZero++;
            ans=min(ans,countZero);
            i++;j++;
        }
        return ans;
    }
};
