class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int i=0, j= arr.size()-1;
        int idx=-1;
        while(i<= j){
            int m = (i+j)>>1;
            if(arr[m] == target){
                idx = m;
                break;
            }
            if(arr[m] > target){
                j= m-1;
            }
            else{
                i= m+1;
            }
        }
        if(idx == -1){
            return 0;
        }
        int nas = 1;
        int x=idx-1;
        idx++;
        while(x >=0 && arr[x] == target){
            x--;
            nas++;
        }
        while(idx < arr.size() && arr[idx] == target){
            idx++;
            nas++;
        }
        return nas;
    }
};
