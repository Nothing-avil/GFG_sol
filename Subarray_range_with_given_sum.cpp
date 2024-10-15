class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        map<int,int> mp;
        int prefix_sum=0, curr_sum=0, ans=0;
        mp[0]=1;
        for(int i=0; i<arr.size(); i++){
            curr_sum +=arr[i];
            prefix_sum = curr_sum - tar;
            if(mp[prefix_sum]>0) ans += mp[prefix_sum];
            mp[curr_sum]++;
        }
        return ans;
    }
};
