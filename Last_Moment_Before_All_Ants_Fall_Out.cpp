class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int times = 0;
        for(int i : left){
            times = max(times, i);
        }
        for(int i : right){
            times = max(times, (n - i));
        }
        return times;
    }
};
