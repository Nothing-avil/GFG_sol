class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();
        vector<pair<int,int>> activities;
        for(int i = 0; i < n; i++)
        {
            activities.push_back({finish[i], start[i]});
        }
        sort(activities.begin(), activities.end());
        
        int count = 0;
        int last = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(activities[i].second > last)
            {
                count++;
                last = activities[i].first;
            }
        }
        return count;
    }
};
