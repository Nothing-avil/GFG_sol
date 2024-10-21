// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        int a = 0;
        for (int i : arr) {
            a ^= i;  
        }
        if (a == 0) {
            int n = arr.size();
            return (int) pow(2, n - 1)-1;
        }
        return 0;
    }
};
