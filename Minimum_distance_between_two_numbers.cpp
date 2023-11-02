class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int xIndex = -1;
        int yIndex = -1;
        int minDifference = n + 1;
        
        for(int i = 0; i < n; i++) {
            if(a[i] == x) {
                xIndex = i;
            }
            
            if(a[i] == y) {
                yIndex = i;
            }
            
            if(xIndex != -1 && yIndex != -1) {
                minDifference = min(minDifference, abs(xIndex - yIndex));
            }
        }
        if(xIndex == -1 || yIndex == -1){
            return -1;
        }
        return minDifference;
    }
};
