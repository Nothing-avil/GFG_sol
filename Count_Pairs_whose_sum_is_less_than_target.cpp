// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int i=0, j= arr.size()-1;
        int ans=0;
        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum < target){
                ans += (j-i);
                i++;
            }
            else if( sum >= target){
                j--;
            }
        }
        return ans;
    }
};
