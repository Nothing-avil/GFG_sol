class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            arr[i] = k - (arr[i] + k) % k;
            if(arr[i] == k){
                arr[i] = 0;
            }
        }
        sort(arr.begin(), arr.end());
        int answer = 0;
        for(int i=0; i < ceil((double)n/2); i++){
            answer += arr[i];
        }
        return answer;
    }
};
