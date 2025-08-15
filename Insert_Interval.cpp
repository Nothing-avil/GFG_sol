class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> answer;
        sort(intervals.begin(), intervals.end());
        for(auto it : intervals){
            if(!answer.size() || it[0] > answer.back()[1]){
                answer.push_back(it);
                continue;
            }
            auto row = answer.back();
            answer.pop_back();
            row[1] = max(it[1], row[1]);
            answer.push_back(row);
        }
        return answer;
    }
};
