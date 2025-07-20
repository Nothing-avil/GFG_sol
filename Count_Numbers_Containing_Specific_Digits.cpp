class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        int x = 9 * pow(10, n - 1);
        int  size = arr.size();
        for(int i : arr){
            if(i == 0){
                size--;
            }
        }
        int val = 10 - arr.size();
        int y = (9 - size) * pow(val, max(0, n - 1));
        return x - y;
    }
};
