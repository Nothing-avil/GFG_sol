class Solution {
  public:
    int maxValue(vector<int>& arr) {
        function<int(int, int)> solver = [&](int i, int j){
            int f=0, g = 0;
            for(; i <= j; ++i){
                int ss = max(f, g);
                g = f + arr[i];
                f = ss;
            }
            return max(f, g);
        };
        int n = arr.size();
        if(n==1){
            return arr[0];
        }
        return max(solver(0, n-2), solver(1, n-1));
    }
};
