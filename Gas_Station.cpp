/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        int n = gas.size();
        int costs = 0, gass = 0, check = 0, res = 0;
        for(int i=0; i<n; i++){
            gass += gas[i];
            costs += cost[i];
            check += gas[i] - cost[i];
            if(check < 0){
                check = 0;
                res = i+1;
            }
        }
        return gass < costs ? -1 : res;
    }
};
