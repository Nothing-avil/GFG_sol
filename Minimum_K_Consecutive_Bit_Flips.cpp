class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> flip(n+1,0);
        int operation=0;
        for(int i=0;i<n;i++){
            if(i>0)flip[i]+=flip[i-1];
            if(flip[i]%2==1 && arr[i]==0)continue;
            if(flip[i]%2==0 && arr[i]==1)continue;
            if(i>n-k)return -1;
            else{
                operation++;
                flip[i]+=1;
                if(i<n-1)flip[i+k]=-1;
            }
        }
        return operation;
    }
};
