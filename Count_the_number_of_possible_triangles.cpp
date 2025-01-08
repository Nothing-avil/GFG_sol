class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        int n = arr.size();
        if(n<3){
            return 0;
        }
        sort(arr.begin(), arr.end());
        int c=0;
        for(int i = n-1; i>=2; i--){
            int j=0;
            int k=i-1;
            while(j<k){
                if(arr[j] + arr[k] > arr[i]){
                    c += (k-j);
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return c;
    }
};
