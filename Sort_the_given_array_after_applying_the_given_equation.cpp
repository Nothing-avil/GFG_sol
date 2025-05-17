#define f(x, a, b, c) (((a)*(x)*(x)) + ((b)*(x)) + (c))

class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        vector<int> answer;
        for(int i : arr){
            answer.push_back(f(i, A, B, C));
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};
