class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> mpp;
        int res=0;
        int n=arr.size();
        for (int i=0;i<n;i++){
            int diff=target-arr[i];
            if (mpp.find(diff)!=mpp.end()){
                res+=mpp[diff];
            }
            mpp[arr[i]]++;
        }
        return res;
    }
};
