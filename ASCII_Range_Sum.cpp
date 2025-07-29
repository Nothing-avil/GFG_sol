class Solution {
  public:
    vector<int> asciirange(string& s) {
        unordered_map<char, int> mp, mp1;
        int sum = 0;
        for(char ch : s){
            sum += ch;
            if(mp.find(ch) == mp.end()){
                mp[ch] = sum;
            }
            else{
                mp1[ch] = sum;
            }
        }
        vector<int> res;
        for(char i = 'a'; i<='z'; i++){
            int answer = mp1[i] - mp[i] - i;
            if(answer > 0){
                res.push_back(answer);
            }
        }
        return res;
    }
};
