// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        int n = 0;
        int sums = ((arr.size() - 1)*arr.size())/2;
        for(int i : arr){
            n = n + i;
        }
        return n - sums;
    }
};
