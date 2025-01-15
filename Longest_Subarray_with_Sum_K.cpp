class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int res=0;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == k){
                res = max(res, (i+1));
            }
            if(mp.find(sum - k) != mp.end()){
                res= max(res, i - mp[(sum-k)]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return res;
    }
};
