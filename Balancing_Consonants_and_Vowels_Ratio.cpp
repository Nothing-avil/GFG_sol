class Solution {
  public:
    int countBalanced(vector<string>& arr) {
        function<bool(char)> isvowel = [](char ch){
            return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        };
        unordered_map<int, int> mp;
        mp[0] = 1;
        int answer = 0, p = 0;
        for(string i : arr){
            int v = 0, c = 0;
            for(char ch : i){
                if(isvowel(ch)){
                    v++;
                }else{
                    c++;
                }
            }
            int diff = v - c;
            p += diff;
            if(mp[p]){
                answer += mp[p];
            }
            mp[p]++;
        }
        return answer;
    }
};
