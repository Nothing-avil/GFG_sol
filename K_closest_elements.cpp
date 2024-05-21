class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int j=upper_bound(arr.begin(), arr.end(), x)- arr.begin();
        int i=lower_bound(arr.begin(), arr.end(), x)- arr.begin();
        i--;
        vector<int> ans;
        
        while(k--) {
            int a=INT_MAX, b=INT_MAX;
            if(i>=0) a=x-arr[i];
            if(j<n) b=arr[j]-x;
            
            if(b<=a) {
                ans.push_back(arr[j]);
                j++;
            }
            else {
                ans.push_back(arr[i]);
                i--;
            }
        }
        return ans;
    }
};
