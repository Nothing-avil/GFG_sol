class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        int n = arr.size();
        for(int i=1; i<n; i++){
            if(arr[i-1] == arr[i]){
                arr[i-1]*=2;
                arr[i]=0;
            }
        }
        vector<int> er;
        for(int i: arr){
            if(i){
                er.push_back(i);
            }
        }
        for(int i: arr){
            if(!i){
                er.push_back(i);
            }
        }
        return er;
    }
};
