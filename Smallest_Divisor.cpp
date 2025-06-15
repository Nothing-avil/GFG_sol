class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        int n=arr.size();
        int l=1;
        int max_=*max_element(arr.begin(),arr.end());
        int h=max_+k;
        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            int cnt=0;
            for(auto &e:arr){
                cnt+=ceil((double)e/mid);
            }
            if(cnt<=k){
                ans=min(mid,ans);
                h=mid-1;
            }else
                l=mid+1;
        }
        return ans;
    }
};
