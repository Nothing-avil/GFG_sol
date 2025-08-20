class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int size = n*m;
        int s = 0;
        int e = size - 1;
        while(s<=e){
            int mid = (s + e)>>1;
            int ele = mat[mid / m] [mid % m];
            int end = mat[e / m] [e % m];
            int start = mat[s / m] [s % m];
            
            if(ele == x) return true;
           
            else if(ele > end){
                if(start <= x && ele > x) e = mid - 1;
                else  s = mid + 1;
            }
            else{
                if(end >= x && x > ele) s = mid + 1;
                else  e = mid - 1;
            }
        }
        return false;
    }
};
