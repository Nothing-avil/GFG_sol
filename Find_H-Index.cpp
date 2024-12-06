// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        int n= citations.size();
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        for(int i : citations){
            dp[min(i, n)]++;
        }
        for(int h=n, c=0; ;h--){
            c+= dp[h];
            if(c>=h){
                return h;
            }
        }
        return 0;
    }
};
