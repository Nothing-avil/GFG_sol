class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int total= (end- start) +1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>= start and arr[i]<= end){
                total--;
            }
            if(total==0)return 1;
        }
        return total== 0 ? true : false;
    }
};
