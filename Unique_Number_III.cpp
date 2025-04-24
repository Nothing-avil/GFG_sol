// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        int one =0, two = 0;
        for(int i : arr){
            one = (i ^ one) & (~two);
            two = (i ^ two) & (~one);
        }
        return one;
    }
};
