class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        int max = 0;
        int c = 0;
        for(int i: arr){
            if(i >= max){
                max = i;
                c++;
            }
        }
        return c;
    }
};
