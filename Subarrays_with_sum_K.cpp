// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        map<int,int> mp;
        mp[0]=1;
        int sum =0, ans = 0;
        for(int i: arr){
            sum +=i;
            int r = sum-k;
            ans +=  mp[r];
            mp[sum]+=1;
        }
        return ans;
    }
};
