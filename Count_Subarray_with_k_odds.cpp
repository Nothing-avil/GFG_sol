class Solution {
  public:
    int atmostK(vector<int>&arr, int k){
        int n=arr.size();
        int i=0, j=0, cnt=0, ans=0;
        for(; j<n; j++){
            if((arr[j]%2)==1) cnt++;
            for(; i<n && cnt>k; i++){
                if((arr[i]%2)==1) cnt--;
            }
            ans+=(j-i+1);
        }
        return ans;
    }
    int countSubarrays(vector<int>& arr, int k) {
        return atmostK(arr, k)-atmostK(arr, k-1);
    }
};
