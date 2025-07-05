class Solution {
  public:
    int maxSum(vector<int> &arr) {
        int maxi = *max_element(arr.begin(), arr.end());
        int answer = 0;
        for(int i= 1; i<arr.size(); i++){
            answer = max(answer, (arr[i] + arr[i-1]));
        }
        return answer;
    }
};
