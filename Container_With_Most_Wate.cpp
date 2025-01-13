class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int i=0;
        int j= arr.size()-1;
        int answer = 0;
        int init = 0;
        while(i<=j){
            init = min(arr[i], arr[j])*(j-i);
            answer = max(answer, init);
            arr[i] < arr[j] ?i++: j--;
        }
        return answer;
    }
};
