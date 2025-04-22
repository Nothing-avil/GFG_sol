class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int xors = 0;
        for(int i : arr){
            xors ^= i;
        }
        return xors;
    }
};
