class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        int n = passengers.size();
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        int res=0;
        for(int i=0;i<n;i++){
            res+=(abs(chairs[i]-passengers[i]));
        }
        return res;
    }
};
