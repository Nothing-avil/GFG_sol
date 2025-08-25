class Solution {
  public:
    int maximizeMedian(vector<int>& arr, int k) {
         int n = arr.size();
        
        int index = -1;
        if (n % 2 == 0){
            index = (n / 2) - 1;
        }
        else{
            index = n / 2;
        }
        
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = index; i < n - 1; i++){
            if (arr[i] < arr[i + 1]){
                int index_diff = i - index + 1;
                int diff = (arr[i + 1] - arr[i]) * index_diff;
                if (diff >= k){
                    if (count == 0 && n % 2 == 0){
                        return ((arr[i] + (k / index_diff)) + arr[i + 1]) / 2;
                    }
                    return arr[i] + (k / index_diff);
                }
                else{
                    k = k - diff;
                }
            }
            count++;
        }
        return arr[n - 1] + (k / (n - index));
    }
};
