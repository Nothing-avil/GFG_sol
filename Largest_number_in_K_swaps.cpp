class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        string answer = s;
        function<void(int, int)> solve = [&](int idx, int kk){
            if(kk == 0 || idx == s.size()){
                if(s > answer){
                    answer = s;
                }
                return;
            }
            for(int i=idx; i<s.size(); i++){
                if(s[i] > s[idx]){
                    swap(s[i], s[idx]);
                    solve(idx+1, kk - 1);
                    swap(s[i], s[idx]);
                }
                solve(i+1, kk);
            }
        };
        solve(0, k);
        return answer;
    }
};
