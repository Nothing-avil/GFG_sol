class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int count = 0;
        int flag = 0;
        for(int i = n-1; i>=1; i--){
            if(arr[i]<arr[i-1]||flag == 1){
                flag = 1;
                count++;
            }
        }
        return count;
    }
};
