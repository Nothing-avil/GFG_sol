class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        float sums = accumulate(arr.begin(), arr.end(), 0.0);
        float temp=0;
        for(int i:arr){
            temp+=i;
            if(temp==sums/2){
                return true;
            }
        }
        return false;
    }
};
