class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int i=a.size()-1, j= 0;
        int n= b.size();
        while( i>=0 && j < n){
            if(a[i] > b[j]){
                swap(a[i], b[j]);
                i--;
                j++;
            }
            else{
                break;
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
