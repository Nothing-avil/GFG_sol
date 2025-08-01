class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        map<int, pair<int, int>> mp;
        for(auto it: intervals){
            mp[it[0]].first++;
            mp[it[1]].second--;
        }
        int answer = -1, c = 0;
        for(auto &i : mp){
            c += i.second.first;
            if(c >= k){
                answer = i.first;
            }
            c += i.second.second;
        }
        return answer;
    }
};
