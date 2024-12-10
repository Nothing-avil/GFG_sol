class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();
        int firstEnd = intervals[0][1];
        int count =0;
        for(int i =1; i<n; i++){
            if(intervals[i][0]>=firstEnd){
                firstEnd = intervals[i][1];
            }
            else{
                firstEnd = min(firstEnd , intervals[i][1]);
                count = count+1;
            }
        }
        return count;        
    }
};
