class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int count = 0;
        int n = arr.size();
        if(n>1 && arr[0] > arr[1]){
            count++;
        }
        for(int i=1; i<n; i++){
            if(arr[i-1] > arr[i]){
                count++;
            }
        }
        if(count<=4 && count%2==0){
            return true;
        }
        return false;
    }
};
