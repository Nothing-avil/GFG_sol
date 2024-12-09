class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        for(const auto& i:intervals)
        {
            if(v.empty() || v.back()[1]<i[0])
            {
                v.push_back(i);
            }
            else if(v.back()[1]>=i[0] && v.back()[1]<i[1])
            {
                v.back()[1]=i[1];
            }
        }
        return v;
    }
};
