class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int sums = 0;
        for(int i : arr){
            sums += i/k;
            if(i%k){
                sums+=1;
            }
        }
        return sums;
    }
};
