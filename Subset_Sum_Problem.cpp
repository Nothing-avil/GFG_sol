class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        vector<int> bottom(sum+1, 0); bottom[sum] = 1;
        vector<int> top(sum+1, 0);
        for(int i=arr.size()-1; i>=0; i--){
            for(int j=0; j<=sum; j++){
                int v1 = bottom[j];
                int v2 = (j + arr[i]) <= sum ? bottom[j + arr[i]] : 0;
                top[j] = v1 | v2;
                bottom[j] = top[j];
            }
        }
        return top[0];
    }
};
