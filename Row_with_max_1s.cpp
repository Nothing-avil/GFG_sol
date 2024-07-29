class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        for(int i=0;i<arr.size(); i++){
            arr[i][0] = accumulate(arr[i].begin(), arr[i].end(), 0);
        }
        int res=0, j=-1;
        for(int i=0;i<arr.size(); i++){
            if(arr[i][0]>res){
                res=arr[i][0];
                j=i;
            }
        }
        return j;
    }
};
