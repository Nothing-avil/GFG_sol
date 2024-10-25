class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> res(arr.size(), 0);
        int i=0, j= arr.size()-1, k=0;
        while(i<=j){
            res[k++] = arr[j--];
            res[k++] = arr[i++];
        }
        return res;
    }
};
