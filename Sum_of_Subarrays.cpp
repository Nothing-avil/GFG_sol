class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int answer = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            answer += (arr[i] * (i + 1) * (n - i));
        }
        return answer;
    }
};
