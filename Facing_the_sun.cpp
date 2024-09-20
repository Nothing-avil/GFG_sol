class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int count = 1;
        int maxh = height[0];
        for(int i : height){
            if(maxh < i){
                count++;
                maxh=i;
            }
        }
        return count;
    }
};
