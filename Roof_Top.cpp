class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int maxi=0;
        int c=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] <= arr[i-1]){
                c=0;
            }
            else{
                c++;
            }
            maxi = max(maxi, c);
        }
        return maxi;
    }
};
